/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

/* Device header file */
#define EMULATE_EEPROM_SIZE 2
#if defined(__XC16__)
    #include <xc.h>
#elif defined(__C30__)
    #if defined(__PIC24E__)
    	#include <p24Exxxx.h>
    #elif defined (__PIC24F__)||defined (__PIC24FK__)
	#include <p24Fxxxx.h>
    #elif defined(__PIC24H__)
	#include <p24Hxxxx.h>
    #endif
#endif

#include <stdint.h>        /* Includes uint16_t definition                    */
#include <stdbool.h>       /* Includes true/false definition                  */

#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp              */
#include "libpic30.h" // Permet d'utiliser __delay_ms()

#include "mcc_generated_files/mcc.h"

uint16_t value = 0;
/******************************************************************************/
/* Global Variable Declaration                                                */
/******************************************************************************/
uint8_t premierOctet = 0;
uint8_t deuxiemeOctet = 0;
bool pretAEnvoyer = false;
/* i.e. uint16_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/

void init_adc(void){
//    TRISAbits.TRISA1    =0b1;  // set pin as input
//    AD1CON1 = 0;
//    AD1CON1bits.MODE12 = 1;  // Mode: 12 bit
//    AD1CON1bits.SSRC = 7;   // Auto convert
//    AD1CON1bits.ADON     =0b1;  // turn on the ADC
}
/* Note: This is an example of the I2C1_StatusCallback()
         implementation. This is an emulated EEPROM Memory
         configured to act as a I2C Slave Device.
         For specific slave device implementation, remove
         or modify this function to the specific slave device
         behavior.
*/

static uint8_t i2c1_slaveWriteData = 0xAA;
bool I2C1_StatusCallback(I2C1_SLAVE_DRIVER_STATUS status)
{

    // this emulates the slave device memory where data written to slave
    // is placed and data read from slave is taken
    /*
     Emulate EEPORM default memory size is 64bytes
 
     Emulate EEPORM Read/Write Instruction:
     --------------------------------------     
     Byte Write Instruction:
     |Start|slave Addr + w|Ack|AddrHighByte|Ack|AddrLowByte|Ack|data|Nack|Stop|
     
     Page Write Instruction:
     |Start|slave Addr + w|Ack|AddrHighByte|Ack|AddrLowByte|Ack|dataByte n|Ack|...|data Byte n+x|Nack|Stop|
     
     Byte Read Instruction:
     |Start|slave Addr + r|Ack|AddrHighByte|Ack|AddrLowByte|Ack|data|Nack|Stop|

     Page Read Instruction:
     |Start|slave Addr + r|Ack|AddrHighByte|Ack|AddrLowByte|Ack|dataByte n|Ack|...|dataByte n+x|Nack|Stop|
    */
    
    uint8_t EMULATE_EEPROM_Memory[2] =
            {
                0xFF, 0xFF
            };
    
    if(pretAEnvoyer == true){
        EMULATE_EEPROM_Memory[0] = premierOctet;
        EMULATE_EEPROM_Memory[1] = deuxiemeOctet;
        pretAEnvoyer = false;
    }

    static uint16_t address, addrByteCount;
    static bool     addressState = true;

    switch (status)
    {
        case I2C1_SLAVE_TRANSMIT_REQUEST_DETECTED:
            // set up the slave driver buffer transmit pointer
            I2C1_ReadPointerSet(&EMULATE_EEPROM_Memory[address++]);
            if(address >= EMULATE_EEPROM_SIZE) {
                address = 0;
            }
            break;

        case I2C1_SLAVE_RECEIVE_REQUEST_DETECTED:

            addrByteCount = 0;
            addressState = true;

            // set up the slave driver buffer receive pointer
            I2C1_WritePointerSet(&i2c1_slaveWriteData);
            break;

        case I2C1_SLAVE_RECEIVED_DATA_DETECTED:

            if (addressState == true)
            {
                // get the address of the memory being written
                if (addrByteCount == 0)
                {
                    address = (i2c1_slaveWriteData << 8) & 0xFF00;
                    addrByteCount++;
                }
                else if (addrByteCount == 1)
                {
                    address = address | i2c1_slaveWriteData;
                    addrByteCount = 0;
                    addressState = false;
                }
                
                if(address >= EMULATE_EEPROM_SIZE) {
                    address = EMULATE_EEPROM_SIZE;
                }
            }
            else // if (addressState == false)
            {
                // set the memory with the received data
                EMULATE_EEPROM_Memory[address++] = i2c1_slaveWriteData;
                if(address >= EMULATE_EEPROM_SIZE) {
                    address = 0;
                }
            }

            break;

        case I2C1_SLAVE_10BIT_RECEIVE_REQUEST_DETECTED:

            // do something here when 10-bit address is detected

            // 10-bit address is detected

            break;

        default:
            break;

    }

    return true;
}

int16_t main(void)
{

    /* Configure the oscillator for the device */
    //ConfigureOscillator();

    /* Initialize IO ports and peripherals */
    //InitApp();
    SYSTEM_Initialize();
    INTERRUPT_Initialize();
    INTERRUPT_GlobalEnable();
    // Btw, on a set la pin R2 en output pour faire des tests. C'est possible
    // de l'enlever si il le faut.
    /* TODO <INSERT USER APPLICATION CODE HERE> */
    TRISAbits.TRISA0 = 0;
    //TRISAbits.TRISA1 = 1;
    //init_adc();
    
    uint16_t tempsIntervale = 1000;

    // initialize the i2c slave driver    
    I2C1_Initialize();
    
    // set up the slave driver
 

    while(1)
    {
        //I2C1_TransmitProcess();
        //SlaveWriteBuffer = 100;
        //SlaveReadBuffer = 100;
        
        //LATAbits.LATA0 = 1;
        //__delay_ms(tempsIntervale);
        //LATAbits.LATA0 = 0;
        //__delay_ms(tempsIntervale);
        
        
        // Wait for conversion
        // and then get result
        while(!ADC1_IsConversionComplete());
        value = (uint16_t)ADC1_ConversionResultGet();
        premierOctet = value & 0xff;
        deuxiemeOctet = (value >> 8);
        pretAEnvoyer = true;
        //tempsIntervale = value;

        // Shift for MSb
        //value = value >> 2;

        // Write to Port Latch/LEDs
        //LATA = value;
    }
}
