EESchema Schematic File Version 4
LIBS:PCB_v2-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 4
Title "BLDC_Driver"
Date ""
Rev "V1.0"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Driver_Motor:DRV8308 U1
U 1 1 5BDA2443
P 5500 3800
F 0 "U1" H 5100 2900 50  0000 C CNN
F 1 "DRV8308" H 5050 2800 50  0000 C CNN
F 2 "Package_DFN_QFN:Texas_S-PVQFN-N40_EP3.52x2.62mm" H 5550 2800 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/drv8308.pdf" H 4800 5250 50  0001 C CNN
	1    5500 3800
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 5BDA24F5
P 4200 2500
F 0 "C3" H 4315 2546 50  0000 L CNN
F 1 "0.1uF" H 3900 2500 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 4238 2350 50  0001 C CNN
F 3 "~" H 4200 2500 50  0001 C CNN
	1    4200 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 2350 4200 2300
Wire Wire Line
	4200 2300 4600 2300
Wire Wire Line
	4600 2300 4600 2500
Wire Wire Line
	4600 2500 4700 2500
Wire Wire Line
	4700 2600 4500 2600
Wire Wire Line
	4500 2600 4500 2700
Wire Wire Line
	4500 2700 4200 2700
Wire Wire Line
	4200 2700 4200 2650
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5BDA2877
P 3100 1350
F 0 "#FLG0101" H 3100 1425 50  0001 C CNN
F 1 "PWR_FLAG" H 3100 1524 50  0000 C CNN
F 2 "" H 3100 1350 50  0001 C CNN
F 3 "~" H 3100 1350 50  0001 C CNN
	1    3100 1350
	1    0    0    -1  
$EndComp
Text Label 2500 1400 0    50   ~ 0
Vm_in
Wire Wire Line
	3100 1350 3100 1400
$Comp
L Device:C C5
U 1 1 5BDA2A67
P 5300 1550
F 0 "C5" H 5200 1650 50  0000 L CNN
F 1 "1uF" H 5350 1650 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 5338 1400 50  0001 C CNN
F 3 "~" H 5300 1550 50  0001 C CNN
	1    5300 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 1700 5300 2300
Text Label 5700 1150 2    50   ~ 0
Vm
$Comp
L Device:C C4
U 1 1 5BDA2C63
P 5000 2050
F 0 "C4" H 5050 2150 50  0000 L CNN
F 1 "1uF" H 4750 2050 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 5038 1900 50  0001 C CNN
F 3 "~" H 5000 2050 50  0001 C CNN
	1    5000 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 1400 5300 1150
Wire Wire Line
	5200 2200 5000 2200
Wire Wire Line
	5000 1900 5000 1700
Wire Wire Line
	5200 2200 5200 2300
$Comp
L power:GNDREF #PWR0101
U 1 1 5BDA360B
P 4650 1950
F 0 "#PWR0101" H 4650 1700 50  0001 C CNN
F 1 "GNDREF" H 4450 1900 50  0000 C CNN
F 2 "" H 4650 1950 50  0001 C CNN
F 3 "" H 4650 1950 50  0001 C CNN
	1    4650 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 1700 4650 1950
Wire Wire Line
	4650 1700 5000 1700
Wire Wire Line
	5300 1150 5500 1150
Connection ~ 5500 1150
Wire Wire Line
	5500 1150 5700 1150
$Comp
L Device:C C1
U 1 1 5BDB4152
P 2700 1600
F 0 "C1" H 2600 1700 50  0000 C CNN
F 1 "0.1uF" H 2500 1600 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 2738 1450 50  0001 C CNN
F 3 "~" H 2700 1600 50  0001 C CNN
	1    2700 1600
	1    0    0    -1  
$EndComp
$Comp
L power:GNDREF #PWR0102
U 1 1 5BDB4159
P 2850 1950
F 0 "#PWR0102" H 2850 1700 50  0001 C CNN
F 1 "GNDREF" H 2855 1777 50  0000 C CNN
F 2 "" H 2850 1950 50  0001 C CNN
F 3 "" H 2850 1950 50  0001 C CNN
	1    2850 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 1150 5500 2300
Wire Wire Line
	2500 1400 2700 1400
Wire Wire Line
	2700 1450 2700 1400
Connection ~ 2700 1400
Wire Wire Line
	2700 1400 3000 1400
Wire Wire Line
	3000 1450 3000 1400
Connection ~ 3000 1400
Wire Wire Line
	3000 1400 3100 1400
Wire Wire Line
	2700 1750 2700 1850
Wire Wire Line
	2700 1850 2850 1850
Wire Wire Line
	3000 1850 3000 1750
Wire Wire Line
	2850 1950 2850 1850
Connection ~ 2850 1850
Wire Wire Line
	2850 1850 3000 1850
$Comp
L Device:C C6
U 1 1 5BDB5C53
P 5900 1600
F 0 "C6" V 5648 1600 50  0000 C CNN
F 1 "0.1uF" V 5739 1600 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 5938 1450 50  0001 C CNN
F 3 "~" H 5900 1600 50  0001 C CNN
	1    5900 1600
	0    1    1    0   
$EndComp
$Comp
L power:GNDREF #PWR0103
U 1 1 5BDB5CE4
P 6150 1700
F 0 "#PWR0103" H 6150 1450 50  0001 C CNN
F 1 "GNDREF" H 6155 1527 50  0000 C CNN
F 2 "" H 6150 1700 50  0001 C CNN
F 3 "" H 6150 1700 50  0001 C CNN
	1    6150 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 1600 5700 1600
Wire Wire Line
	5700 1600 5700 2200
Wire Wire Line
	6050 1600 6150 1600
Wire Wire Line
	6150 1600 6150 1700
Wire Wire Line
	4700 3400 4400 3400
Wire Wire Line
	4700 3500 4400 3500
Wire Wire Line
	4700 3600 4400 3600
Wire Wire Line
	4700 3700 4400 3700
Wire Wire Line
	4700 3800 4400 3800
Text Label 4400 3400 0    50   ~ 0
RESET
Text Label 4400 3500 0    50   ~ 0
BRAKE
Text Label 4400 3600 0    50   ~ 0
CLKIN
Text Label 4400 3700 0    50   ~ 0
DIR
Text Label 4400 3800 0    50   ~ 0
ENABLE
Wire Wire Line
	4700 4400 4400 4400
Wire Wire Line
	4700 4500 4400 4500
Wire Wire Line
	4700 4300 4400 4300
Text Label 4400 4300 0    50   ~ 0
FGOUT
Text Label 4400 4400 0    50   ~ 0
FAULTn
Text Label 4400 4500 0    50   ~ 0
LOCKn
NoConn ~ 4700 4000
NoConn ~ 4700 4100
NoConn ~ 4700 4200
Wire Wire Line
	4400 3100 4700 3100
Wire Wire Line
	4400 3000 4700 3000
Wire Wire Line
	4400 2900 4700 2900
Wire Wire Line
	4400 2800 4700 2800
Text Label 4400 2800 0    50   ~ 0
SCLK
Text Label 4400 2900 0    50   ~ 0
SCS
Text Label 4400 3000 0    50   ~ 0
DATAI
Text Label 4400 3100 0    50   ~ 0
DATAO
$Sheet
S 6850 2450 950  1100
U 5BDB8344
F0 "Power" 50
F1 "Power.sch" 50
F2 "UHSG" I L 6850 2500 50 
F3 "U" I L 6850 2600 50 
F4 "ULSG" I L 6850 2700 50 
F5 "VHSG" I L 6850 2900 50 
F6 "V" I L 6850 3000 50 
F7 "VLSG" I L 6850 3100 50 
F8 "WHSG" I L 6850 3300 50 
F9 "W" I L 6850 3400 50 
F10 "WLSG" I L 6850 3500 50 
F11 "Vm" I R 7800 2800 50 
F12 "GND" I R 7800 3200 50 
F13 "ISEN" O R 7800 3450 50 
$EndSheet
Wire Wire Line
	6850 2500 6300 2500
Wire Wire Line
	6300 2600 6400 2600
Wire Wire Line
	6850 2700 6300 2700
Wire Wire Line
	6850 2900 6300 2900
Wire Wire Line
	6300 3000 6500 3000
Wire Wire Line
	6850 3100 6300 3100
Wire Wire Line
	6300 3300 6850 3300
Wire Wire Line
	6850 3400 6650 3400
Wire Wire Line
	6300 3500 6850 3500
Wire Wire Line
	7800 3200 8150 3200
Wire Wire Line
	6300 3800 7950 3800
Wire Wire Line
	7950 3800 7950 3450
Wire Wire Line
	7950 3450 7800 3450
Text Label 8150 2800 2    50   ~ 0
Vm
Text Label 8150 3200 2    50   ~ 0
GNDREF
Wire Wire Line
	5400 4700 5400 4850
Wire Wire Line
	5400 4850 5500 4850
Wire Wire Line
	5600 4850 5600 4700
$Comp
L power:GNDREF #PWR0104
U 1 1 5BDCD9D1
P 5500 4950
F 0 "#PWR0104" H 5500 4700 50  0001 C CNN
F 1 "GNDREF" H 5505 4777 50  0000 C CNN
F 2 "" H 5500 4950 50  0001 C CNN
F 3 "" H 5500 4950 50  0001 C CNN
	1    5500 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 4850 5500 4950
Connection ~ 5500 4850
Wire Wire Line
	5500 4850 5600 4850
Text Notes 8800 4750 2    50   ~ 0
Connector of the encoder
Wire Wire Line
	5700 2200 6000 2200
Connection ~ 5700 2200
Wire Wire Line
	5700 2200 5700 2300
Text Label 6000 2200 2    50   ~ 0
Vreg
$Comp
L PCB_v2-rescue:Molex_39-28-1083-MyLibrary J1
U 1 1 5BE0BE2F
P 1750 3050
F 0 "J1" H 2150 3315 50  0000 C CNN
F 1 "Molex_Motor" H 2150 3224 50  0000 C CNN
F 2 "39-28-1083:SHDR8W125P550X420_2X4_1800X960X1310P" H 2400 3150 50  0001 L CNN
F 3 "http://docs-asia.electrocomponents.com/webdocs/0460/0900766b80460da6.pdf" H 2400 3050 50  0001 L CNN
F 4 "MINI-FIT JR. Series, Series Number 5566, 4.2mm Pitch 8 Way 2 Row Straight PCB Header, Solder Termination, 7A" H 2400 2950 50  0001 L CNN "Description"
F 5 "13.1" H 2400 2850 50  0001 L CNN "Height"
F 6 "Molex" H 2400 2750 50  0001 L CNN "Manufacturer_Name"
F 7 "39-28-1083" H 2400 2650 50  0001 L CNN "Manufacturer_Part_Number"
F 8 "4841912P" H 2400 2550 50  0001 L CNN "RS Part Number"
F 9 "http://uk.rs-online.com/web/p/products/4841912P" H 2400 2450 50  0001 L CNN "RS Price/Stock"
F 10 "39-28-1083" H 2400 2350 50  0001 L CNN "Arrow Part Number"
F 11 "http://uk.rs-online.com/web/p/products/4841912P" H 2400 2250 50  0001 L CNN "Arrow Price/Stock"
	1    1750 3050
	1    0    0    -1  
$EndComp
Text Notes 1900 2700 0    50   ~ 0
Molex Connector
Wire Wire Line
	1750 3050 1500 3050
Text Label 1500 3250 0    50   ~ 0
Hall_1
Text Label 2800 3250 2    50   ~ 0
Hall_2
Wire Wire Line
	1750 3150 1500 3150
Text Label 1500 3350 0    50   ~ 0
Vreg
Text GLabel 2800 3350 2    50   Input ~ 0
Motor_3
Wire Wire Line
	2550 3150 2800 3150
Wire Wire Line
	1750 3250 1500 3250
Wire Wire Line
	2550 3350 2800 3350
Wire Wire Line
	1750 3350 1500 3350
Text GLabel 2800 3150 2    50   Input ~ 0
Motor_2
Text GLabel 1500 3150 0    50   Input ~ 0
Motor_1
$Comp
L power:GNDREF #PWR0106
U 1 1 5BE1EFAA
P 3400 3250
F 0 "#PWR0106" H 3400 3000 50  0001 C CNN
F 1 "GNDREF" H 3405 3077 50  0000 C CNN
F 2 "" H 3400 3250 50  0001 C CNN
F 3 "" H 3400 3250 50  0001 C CNN
	1    3400 3250
	1    0    0    -1  
$EndComp
Text Label 1500 3050 0    50   ~ 0
Hall_3
Wire Wire Line
	6300 4000 6750 4000
Wire Wire Line
	6300 4200 6750 4200
Wire Wire Line
	6300 4400 6750 4400
Text Label 6750 4000 2    50   ~ 0
UHP
Text Label 6750 4200 2    50   ~ 0
VHP
Text Label 6750 4400 2    50   ~ 0
WHP
Text Notes 3050 4450 2    50   ~ 0
Hall Sensors connection
Text Label 1650 5000 0    50   ~ 0
Hall_1
Text Label 1650 5450 0    50   ~ 0
Hall_2
Text Label 1650 5950 0    50   ~ 0
Hall_3
$Comp
L Device:R R1
U 1 1 5BE1F41A
P 2100 4800
F 0 "R1" H 2170 4846 50  0000 L CNN
F 1 "1K" H 2170 4755 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 2030 4800 50  0001 C CNN
F 3 "~" H 2100 4800 50  0001 C CNN
	1    2100 4800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 5BE26F10
P 2350 5200
F 0 "R2" H 2420 5246 50  0000 L CNN
F 1 "1K" H 2420 5155 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 2280 5200 50  0001 C CNN
F 3 "~" H 2350 5200 50  0001 C CNN
	1    2350 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5BE26F46
P 2600 5700
F 0 "R3" H 2670 5746 50  0000 L CNN
F 1 "1K" H 2670 5655 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 2530 5700 50  0001 C CNN
F 3 "~" H 2600 5700 50  0001 C CNN
	1    2600 5700
	1    0    0    -1  
$EndComp
Text Label 1650 4600 0    50   ~ 0
Vreg
Connection ~ 2350 5450
Wire Wire Line
	1650 5450 2350 5450
Connection ~ 2600 5950
Wire Wire Line
	1650 5950 2600 5950
Connection ~ 2350 4600
Wire Wire Line
	2350 4600 2600 4600
Wire Wire Line
	2350 5450 2900 5450
Wire Wire Line
	2600 5950 2900 5950
Text Label 2900 5000 2    50   ~ 0
UHP
Text Label 2900 5450 2    50   ~ 0
VHP
Text Label 2900 5950 2    50   ~ 0
WHP
Wire Wire Line
	2600 5550 2600 4600
Wire Wire Line
	2600 5850 2600 5950
Wire Wire Line
	2350 5050 2350 4600
Wire Wire Line
	2350 5350 2350 5450
Wire Wire Line
	1650 4600 2100 4600
Wire Wire Line
	2100 4650 2100 4600
Wire Wire Line
	1650 5000 2100 5000
Connection ~ 2100 4600
Wire Wire Line
	2100 4600 2350 4600
Wire Wire Line
	2100 4950 2100 5000
Connection ~ 2100 5000
Wire Wire Line
	2100 5000 2900 5000
$Comp
L Device:R R4
U 1 1 5BE62116
P 3450 4850
F 0 "R4" H 3520 4896 50  0000 L CNN
F 1 "1K" H 3520 4805 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 3380 4850 50  0001 C CNN
F 3 "~" H 3450 4850 50  0001 C CNN
	1    3450 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 4600 3450 4700
$Comp
L Device:R R5
U 1 1 5BE65931
P 3450 5600
F 0 "R5" H 3520 5646 50  0000 L CNN
F 1 "1K" H 3520 5555 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 3380 5600 50  0001 C CNN
F 3 "~" H 3450 5600 50  0001 C CNN
	1    3450 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 5000 3450 5050
$Comp
L power:GNDREF #PWR0107
U 1 1 5BE690C7
P 3450 5850
F 0 "#PWR0107" H 3450 5600 50  0001 C CNN
F 1 "GNDREF" H 3455 5677 50  0000 C CNN
F 2 "" H 3450 5850 50  0001 C CNN
F 3 "" H 3450 5850 50  0001 C CNN
	1    3450 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 5050 3800 5050
Connection ~ 3450 5050
Wire Wire Line
	3450 5050 3450 5200
Wire Wire Line
	3450 5200 3800 5200
Connection ~ 3450 5200
Wire Wire Line
	3450 5350 3800 5350
Wire Wire Line
	3450 5200 3450 5350
Connection ~ 3450 5350
Wire Wire Line
	3450 5350 3450 5450
Wire Wire Line
	3450 5750 3450 5850
Text Label 3800 5050 2    50   ~ 0
UHN
Text Label 3800 5200 2    50   ~ 0
VHN
Text Label 3800 5350 2    50   ~ 0
WHN
Wire Wire Line
	3450 4600 2600 4600
Connection ~ 2600 4600
Wire Wire Line
	6300 4100 6750 4100
Wire Wire Line
	6300 4300 6750 4300
Wire Wire Line
	6300 4500 6750 4500
Text Label 6750 4100 2    50   ~ 0
UHN
Text Label 6750 4300 2    50   ~ 0
VHN
Text Label 6750 4500 2    50   ~ 0
WHN
$Comp
L Device:CP1 C2
U 1 1 5BEA706D
P 3000 1600
F 0 "C2" H 3115 1646 50  0000 L CNN
F 1 "470uF" H 3115 1555 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D8.0mm_P5.00mm" H 3000 1600 50  0001 C CNN
F 3 "~" H 3000 1600 50  0001 C CNN
	1    3000 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8150 2800 7800 2800
$Sheet
S 9050 2050 1000 1500
U 5BEAB9AB
F0 "MCU" 50
F1 "MCU.sch" 50
F2 "GND" I L 9050 2150 50 
F3 "0" I L 9050 2250 50 
F4 "1" I L 9050 2350 50 
F5 "2" I L 9050 2450 50 
F6 "3" I L 9050 2550 50 
F7 "4" I L 9050 2650 50 
F8 "5" I L 9050 2750 50 
F9 "6" I L 9050 2850 50 
F10 "7" I L 9050 2950 50 
F11 "8" I L 9050 3050 50 
F12 "9" I L 9050 3150 50 
F13 "10" I L 9050 3250 50 
F14 "11" I L 9050 3350 50 
F15 "12" I L 9050 3450 50 
F16 "GND" I R 10050 2250 50 
F17 "Vin" I R 10050 2150 50 
F18 "3.3" I R 10050 2350 50 
F19 "A9" I R 10050 2450 50 
F20 "A8" I R 10050 2550 50 
F21 "A7" I R 10050 2650 50 
F22 "A6" I R 10050 2750 50 
F23 "A5" I R 10050 2850 50 
F24 "A4" I R 10050 2950 50 
F25 "A3" I R 10050 3050 50 
F26 "A2" I R 10050 3150 50 
F27 "A1" I R 10050 3250 50 
F28 "A0" I R 10050 3350 50 
F29 "13" I R 10050 3450 50 
$EndSheet
Wire Wire Line
	10050 2250 10350 2250
Wire Wire Line
	10050 2150 10350 2150
Wire Wire Line
	9050 2250 8700 2250
Wire Wire Line
	9050 2550 8700 2550
Wire Wire Line
	9050 2650 8700 2650
Wire Wire Line
	9050 2350 8700 2350
Wire Wire Line
	9050 2450 8700 2450
Wire Wire Line
	9050 2750 8700 2750
Wire Wire Line
	9050 2850 8700 2850
Text Label 8700 2250 0    50   ~ 0
A
Text Label 8700 2350 0    50   ~ 0
B
Wire Wire Line
	9050 2950 8700 2950
Wire Wire Line
	9050 3150 8700 3150
Wire Wire Line
	9050 3250 8700 3250
Wire Wire Line
	9050 3350 8700 3350
Wire Wire Line
	10050 3450 10350 3450
Text Label 8700 2450 0    50   ~ 0
RESET
Text Label 8700 2550 0    50   ~ 0
ENABLE
Text Label 8700 2650 0    50   ~ 0
DIR
Text Label 8700 2750 0    50   ~ 0
BRAKE
Text Label 8700 2850 0    50   ~ 0
CLKIN
Text Label 8700 2950 0    50   ~ 0
LOCKn
Text Label 8700 3050 0    50   ~ 0
FAULTn
Text Label 8700 3150 0    50   ~ 0
FGOUT
Text Label 8700 3250 0    50   ~ 0
SCS
Text Label 8700 3350 0    50   ~ 0
DATAI
Text Label 8700 3450 0    50   ~ 0
DATAO
Text Label 10350 3450 2    50   ~ 0
SCLK
Text Label 10350 2150 2    50   ~ 0
Vin
Text Label 10350 2250 2    50   ~ 0
GNDREF
NoConn ~ 10050 2750
NoConn ~ 10050 3050
NoConn ~ 5600 2300
NoConn ~ 4700 3200
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J2
U 1 1 5C7B26E4
P 8300 5250
F 0 "J2" H 8350 5667 50  0000 C CNN
F 1 "Conn_Encoder" H 8350 5576 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x05_P2.54mm_Vertical" H 8300 5250 50  0001 C CNN
F 3 "~" H 8300 5250 50  0001 C CNN
	1    8300 5250
	1    0    0    -1  
$EndComp
Text Label 8000 5350 2    50   ~ 0
GNDREF
Wire Wire Line
	7700 5150 8100 5150
NoConn ~ 8100 5050
NoConn ~ 8600 5350
NoConn ~ 8100 5450
NoConn ~ 8600 5050
Text Label 8900 5450 0    50   ~ 0
Vreg
Text Label 8800 5250 0    50   ~ 0
ENC_A
Wire Wire Line
	9050 5250 8600 5250
Text Label 8800 5150 0    50   ~ 0
ENC_B
Text Label 7950 5250 2    50   ~ 0
ENC_!A
Wire Wire Line
	7700 5250 8100 5250
Text Label 7950 5150 2    50   ~ 0
ENC_!B
Wire Wire Line
	7700 5350 8100 5350
$Sheet
S 4950 5600 1100 1350
U 5C800E90
F0 "Encoder" 50
F1 "encoderCircuit.sch" 50
F2 "ENC_A" I L 4950 5750 50 
F3 "ENC_!A" I L 4950 6100 50 
F4 "ENC_B" I L 4950 6450 50 
F5 "ENC_!B" I L 4950 6800 50 
F6 "Vreg" I R 6050 6250 50 
F7 "GND" I R 6050 6500 50 
F8 "3.3V" I R 6050 6750 50 
F9 "A" I R 6050 5750 50 
F10 "B" I R 6050 6000 50 
$EndSheet
Text Label 6400 5750 2    50   ~ 0
A
Wire Wire Line
	6400 5750 6050 5750
Text Label 6400 6000 2    50   ~ 0
B
Wire Wire Line
	6400 6000 6050 6000
Text Label 4600 5750 0    50   ~ 0
ENC_A
Wire Wire Line
	4600 5750 4950 5750
Text Label 4600 6100 0    50   ~ 0
ENC_!A
Wire Wire Line
	4600 6100 4950 6100
Text Label 4600 6450 0    50   ~ 0
ENC_B
Wire Wire Line
	4600 6450 4950 6450
Text Label 4600 6800 0    50   ~ 0
ENC_!B
Wire Wire Line
	4600 6800 4950 6800
Text Label 6400 6250 2    50   ~ 0
Vreg
Wire Wire Line
	6400 6250 6050 6250
Text Label 6400 6500 2    50   ~ 0
GNDREF
Wire Wire Line
	6400 6500 6050 6500
Text Label 10350 2350 2    50   ~ 0
3.3V
Wire Wire Line
	10350 2350 10050 2350
Text Label 6400 6750 2    50   ~ 0
3.3V
Wire Wire Line
	6400 6750 6050 6750
NoConn ~ 9050 2150
$Comp
L Connector_Generic:Conn_02x02_Odd_Even J9
U 1 1 5CA006DE
P 10600 2850
F 0 "J9" H 10650 3067 50  0000 C CNN
F 1 "Conn_I2C" H 10650 2976 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_2x02_P2.54mm_Vertical" H 10600 2850 50  0001 C CNN
F 3 "~" H 10600 2850 50  0001 C CNN
	1    10600 2850
	1    0    0    -1  
$EndComp
Text Label 1050 1300 2    50   ~ 0
GNDREF
Wire Wire Line
	1050 1300 1200 1300
Text Label 1050 1200 2    50   ~ 0
Vm_in
Wire Wire Line
	1050 1200 1200 1200
Wire Wire Line
	8650 3050 9050 3050
Wire Wire Line
	8650 3450 9050 3450
Text Label 1100 800  2    50   ~ 0
GNDREF
Wire Wire Line
	1100 800  1250 800 
Text Label 1100 700  2    50   ~ 0
Vm_in
Wire Wire Line
	1100 700  1250 700 
$Comp
L Connector:Conn_01x03_Male J3
U 1 1 5C83F669
P 1450 800
F 0 "J3" H 1423 823 50  0000 R CNN
F 1 "Molex_Pwr_In" H 1423 732 50  0000 R CNN
F 2 "MyLibrary:Molex,1x3" H 1450 800 50  0001 C CNN
F 3 "~" H 1450 800 50  0001 C CNN
	1    1450 800 
	-1   0    0    -1  
$EndComp
Text Label 11050 2850 0    50   ~ 0
SCL
Text Label 10150 2850 0    50   ~ 0
SCL
Wire Wire Line
	10050 2850 10400 2850
Wire Wire Line
	10900 2850 11050 2850
Text Label 10150 2950 0    50   ~ 0
SDA
Text Label 11050 2950 0    50   ~ 0
SDA
Wire Wire Line
	11050 2950 10900 2950
Wire Wire Line
	10400 2950 10050 2950
Text Label 6800 2000 0    50   ~ 0
U
Text Label 6800 2150 0    50   ~ 0
V
Text Label 6800 2300 0    50   ~ 0
W
Wire Wire Line
	6400 2600 6400 2000
Wire Wire Line
	6400 2000 6800 2000
Connection ~ 6400 2600
Wire Wire Line
	6400 2600 6850 2600
Wire Wire Line
	6800 2150 6500 2150
Wire Wire Line
	6500 2150 6500 3000
Connection ~ 6500 3000
Wire Wire Line
	6500 3000 6850 3000
Wire Wire Line
	6800 2300 6650 2300
Wire Wire Line
	6650 2300 6650 3400
Connection ~ 6650 3400
Wire Wire Line
	6650 3400 6300 3400
$Comp
L Connector_Generic:Conn_02x03_Odd_Even J6
U 1 1 5CB458E4
P 10600 3250
F 0 "J6" H 10650 3600 50  0000 C CNN
F 1 "Adress_Pins" H 10650 3500 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x03_P2.54mm_Vertical" H 10600 3250 50  0001 C CNN
F 3 "~" H 10600 3250 50  0001 C CNN
	1    10600 3250
	1    0    0    1   
$EndComp
Wire Wire Line
	10050 3250 10400 3250
Wire Wire Line
	10400 3150 10050 3150
Wire Wire Line
	10050 3350 10400 3350
$Comp
L power:GNDREF #PWR0105
U 1 1 5CB708DC
P 11000 3700
F 0 "#PWR0105" H 11000 3450 50  0001 C CNN
F 1 "GNDREF" H 11005 3527 50  0000 C CNN
F 2 "" H 11000 3700 50  0001 C CNN
F 3 "" H 11000 3700 50  0001 C CNN
	1    11000 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	10900 3150 11000 3150
Wire Wire Line
	10900 3250 11000 3250
Wire Wire Line
	11000 3150 11000 3250
Connection ~ 11000 3250
Wire Wire Line
	11000 3250 11000 3350
Wire Wire Line
	10900 3350 11000 3350
Connection ~ 11000 3350
Wire Wire Line
	11000 3350 11000 3700
Wire Wire Line
	1350 2150 1350 2250
Wire Wire Line
	1350 2250 1050 2250
Text Label 1050 2250 0    50   ~ 0
GNDREF
Wire Wire Line
	1050 1850 700  1850
Text Label 700  1850 0    50   ~ 0
Vm_in
Wire Wire Line
	1650 1850 2000 1850
Text Label 2000 1850 2    50   ~ 0
Vin
Wire Wire Line
	10050 2450 10350 2450
Wire Wire Line
	10050 2550 10350 2550
Wire Wire Line
	10050 2650 10350 2650
$Comp
L Device:LED Vert1
U 1 1 5DCA1693
P 10500 5500
F 0 "Vert1" H 10493 5245 50  0000 C CNN
F 1 "LED1" H 10493 5336 50  0000 C CNN
F 2 "" H 10500 5500 50  0001 C CNN
F 3 "~" H 10500 5500 50  0001 C CNN
	1    10500 5500
	-1   0    0    1   
$EndComp
$Comp
L Device:LED Rouge1
U 1 1 5DCB8BC5
P 10500 5900
F 0 "Rouge1" H 10493 5645 50  0000 C CNN
F 1 "LED2" H 10493 5736 50  0000 C CNN
F 2 "" H 10500 5900 50  0001 C CNN
F 3 "~" H 10500 5900 50  0001 C CNN
	1    10500 5900
	-1   0    0    1   
$EndComp
$Comp
L Device:LED Rouge2
U 1 1 5DCC2745
P 10500 6350
F 0 "Rouge2" H 10493 6095 50  0000 C CNN
F 1 "LED3" H 10493 6186 50  0000 C CNN
F 2 "" H 10500 6350 50  0001 C CNN
F 3 "~" H 10500 6350 50  0001 C CNN
	1    10500 6350
	-1   0    0    1   
$EndComp
Text Label 10800 5500 0    50   ~ 0
GNDREF
Text Label 10150 2450 0    50   ~ 0
LED1
Text Label 10150 2550 0    50   ~ 0
LED2
Text Label 10150 2650 0    50   ~ 0
LED3
Wire Wire Line
	10650 5500 11100 5500
Wire Wire Line
	10650 5900 11100 5900
Wire Wire Line
	10650 6350 11100 6350
Text Label 10800 5900 0    50   ~ 0
GNDREF
Text Label 10800 6350 0    50   ~ 0
GNDREF
$Comp
L Device:R 330ohm1
U 1 1 5DDD767E
P 10200 5500
F 0 "330ohm1" V 9993 5500 50  0000 C CNN
F 1 "R10" V 10084 5500 50  0000 C CNN
F 2 "" V 10130 5500 50  0001 C CNN
F 3 "~" H 10200 5500 50  0001 C CNN
	1    10200 5500
	0    1    1    0   
$EndComp
$Comp
L Device:R 330ohm2
U 1 1 5DDF84A9
P 10200 5900
F 0 "330ohm2" V 9993 5900 50  0000 C CNN
F 1 "R11" V 10084 5900 50  0000 C CNN
F 2 "" V 10130 5900 50  0001 C CNN
F 3 "~" H 10200 5900 50  0001 C CNN
	1    10200 5900
	0    1    1    0   
$EndComp
$Comp
L Device:R 330ohm3
U 1 1 5DE026F6
P 10200 6350
F 0 "330ohm3" V 9993 6350 50  0000 C CNN
F 1 "R13" V 10084 6350 50  0000 C CNN
F 2 "" V 10130 6350 50  0001 C CNN
F 3 "~" H 10200 6350 50  0001 C CNN
	1    10200 6350
	0    1    1    0   
$EndComp
Wire Wire Line
	10050 5500 9700 5500
Wire Wire Line
	10050 5900 9700 5900
Wire Wire Line
	10050 6350 9700 6350
Text Notes 10000 5100 0    50   ~ 0
Connector of the LEDs
Text Label 9700 5500 0    50   ~ 0
LED1
Text Label 9700 5900 0    50   ~ 0
LED2
Text Label 9700 6350 0    50   ~ 0
LED3
$Comp
L MyLibrary:LM2931 U4
U 1 1 5DCAE5B5
P 1350 1850
F 0 "U4" H 1350 2092 50  0000 C CNN
F 1 "LM2931" H 1350 2001 50  0000 C CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 1350 2075 50  0001 C CIN
F 3 "http://www.fairchildsemi.com/ds/LM/LM78L05A.pdf" H 1350 1800 50  0001 C CNN
	1    1350 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Female J5
U 1 1 5CA9A975
P 1400 1300
F 0 "J5" H 1427 1326 50  0000 L CNN
F 1 "Molex_Pwr_Out" H 1427 1235 50  0000 L CNN
F 2 "MyLibrary:Molex,1x3,Right" H 1400 1300 50  0001 C CNN
F 3 "~" H 1400 1300 50  0001 C CNN
	1    1400 1300
	1    0    0    -1  
$EndComp
NoConn ~ 1200 1400
NoConn ~ 1250 900 
$Comp
L Switch:SW_DIP_x01 SW1
U 1 1 5DCCF092
P 2700 850
F 0 "SW1" H 2700 1117 50  0000 C CNN
F 1 "SW_DIP_x01" H 2700 1026 50  0000 C CNN
F 2 "" H 2700 850 50  0001 C CNN
F 3 "~" H 2700 850 50  0001 C CNN
	1    2700 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 850  3300 850 
Wire Wire Line
	2400 850  2100 850 
Text Label 2100 850  0    50   ~ 0
Vm_in
Text Label 3200 850  0    50   ~ 0
Vm
Wire Wire Line
	2550 3250 2800 3250
Wire Wire Line
	3400 3050 3400 3250
Wire Wire Line
	2550 3050 3400 3050
Wire Wire Line
	8600 5450 9050 5450
Wire Wire Line
	8600 5150 9050 5150
$EndSCHEMATC
