EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Schéma pic-pickit 3"
Date "2020-03-09"
Rev "v00"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	1500 2850 2000 2850
Wire Wire Line
	1400 2950 2000 2950
Wire Wire Line
	1650 3250 2000 3250
Wire Wire Line
	1550 3750 2000 3750
$Comp
L Device:R R1
U 1 1 5F6DF8B5
P 1800 1300
F 0 "R1" V 1593 1300 50  0000 C CNN
F 1 "1k" V 1684 1300 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 1730 1300 50  0001 C CNN
F 3 "~" H 1800 1300 50  0001 C CNN
	1    1800 1300
	0    1    1    0   
$EndComp
Wire Wire Line
	1600 900  2000 900 
Wire Wire Line
	2000 3150 1350 3150
Text Notes 2150 5100 0    50   ~ 0
SIG ou RAW
Wire Wire Line
	1650 3250 1150 3250
Connection ~ 1650 3250
Wire Wire Line
	1550 3750 950  3750
Wire Wire Line
	950  3750 950  5300
Connection ~ 1550 3750
Text Notes 2150 5200 0    50   ~ 0
Vss (GND)\n
Text Notes 2150 5300 0    50   ~ 0
Vdd
$Comp
L Connector:Conn_01x03_Male J2
U 1 1 6009B195
P 2050 5200
F 0 "J2" H 2100 5050 50  0000 R CNN
F 1 "Conn_01x03_Male" H 2400 4950 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 2050 5200 50  0001 C CNN
F 3 "~" H 2050 5200 50  0001 C CNN
	1    2050 5200
	-1   0    0    -1  
$EndComp
Wire Wire Line
	1850 5200 1150 5200
Wire Wire Line
	1150 3250 1150 5200
Wire Wire Line
	950  5300 1850 5300
Wire Wire Line
	1350 5100 1850 5100
Wire Wire Line
	1350 3150 1350 5100
$Comp
L Connector:Conn_01x06_Female J1
U 1 1 600A24D0
P 900 1400
F 0 "J1" H 792 1785 50  0000 C CNN
F 1 "Conn_01x06_Female" H 792 1694 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x06_P2.54mm_Vertical" H 900 1400 50  0001 C CNN
F 3 "~" H 900 1400 50  0001 C CNN
	1    900  1400
	-1   0    0    -1  
$EndComp
Wire Wire Line
	1100 1600 1400 1600
Wire Wire Line
	1400 1600 1400 2950
Wire Wire Line
	1100 1500 1500 1500
Wire Wire Line
	1500 1500 1500 2850
Wire Wire Line
	1100 1400 1650 1400
Wire Wire Line
	1650 1400 1650 3250
Wire Wire Line
	1100 1200 1600 1200
Wire Wire Line
	1600 1200 1600 900 
Wire Wire Line
	1100 1300 1550 1300
Wire Wire Line
	2000 900  2000 1300
Wire Wire Line
	1950 1300 2000 1300
Connection ~ 2000 1300
Wire Wire Line
	2000 1300 2000 2550
Wire Wire Line
	1550 1300 1550 3750
Connection ~ 1550 1300
Wire Wire Line
	1550 1300 1650 1300
$Comp
L PCB-rescue:PIC24F32KA302-I_SS-2020-04-10_20-01-39 U1
U 1 1 5E90D797
P 2000 2550
F 0 "U1" H 7300 2937 60  0000 C CNN
F 1 "PIC24F32KA302-I_SS" H 7300 2831 60  0000 C CNN
F 2 "24FV32KA302A:PIC24F32KA302-I&slash_SS" H 7300 2790 60  0001 C CNN
F 3 "" H 2000 2550 60  0000 C CNN
	1    2000 2550
	1    0    0    -1  
$EndComp
Text Notes 8400 5000 0    50   ~ 0
SCL\n
Text Notes 8400 5100 0    50   ~ 0
SDA
$Comp
L Connector:Conn_01x02_Male J3
U 1 1 600B67EA
P 8600 5000
F 0 "J3" H 8700 5250 50  0000 C CNN
F 1 "Conn_01x02_Male" H 8700 5150 50  0000 C CNN
F 2 "Connector_Molex:Molex_KK-396_A-41791-0002_1x02_P3.96mm_Vertical" H 8600 5000 50  0001 C CNN
F 3 "~" H 8600 5000 50  0001 C CNN
	1    8600 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8800 5000 9700 5000
Wire Wire Line
	9700 5000 9700 3650
Wire Wire Line
	9700 3650 9500 3650
Wire Wire Line
	9500 3550 9800 3550
Wire Wire Line
	9800 3550 9800 5100
Wire Wire Line
	9800 5100 8800 5100
Text Notes 800  1550 1    50   ~ 0
Pickit 3
$EndSCHEMATC
