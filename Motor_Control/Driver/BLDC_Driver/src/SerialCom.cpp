#include "SerialCom.h"

//Choose the commande to execute, #reset reset les angles; #arm arms the esc, #setkp, #setkd ou #setki to change one of those parameters
void executeCommande(String commande) {
	if (commande == "reset")
		resetAngle();

	if (commande == "stop")
		stopMotor();
        
    if (commande == "spiSetup")
        SPISetup();
		
}

int oldAngle;
//Read data from the serial port. Return the value if its a number. start with # to call a function, =x to set angle to x
int readSerial() {

	String commande;

	while (Serial.available()) {
		char c = Serial.read();  //gets one byte from serial buffer
		commande += c; //makes the string readString
		delay(2);  //slow looping to allow buffer to fill with next character
	}

	if (commande.length() > 0) {
		Serial.println(commande);  //so you can see the captured string 

		if (commande[0] == '#') {
			commande = commande.substring(1);
			Serial.print("Commande : ");
			Serial.println(commande);
			executeCommande(commande);
		}

		if (commande[0] == '=') {
			double angle = double(commande.substring(1).toInt());
            setAngle(angle);
		}

		else {
			int n = commande.toInt();  //convert readString into a number
			float angleToGo = n;
			Serial.print("Angle To go : ");
			Serial.println(angleToGo);
			oldAngle = angleToGo;
			return(angleToGo);
            //goToAngle(angleToGo);
		}
		commande = ""; //empty for next input
	}
	return oldAngle;
}



