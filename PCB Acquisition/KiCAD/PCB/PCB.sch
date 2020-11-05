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
$Comp
L 2020-04-10_20-01-39:PIC24F32KA302-I_SS U1
U 1 1 5E90D797
P 2000 2550
F 0 "U1" H 7300 2937 60  0000 C CNN
F 1 "PIC24F32KA302-I_SS" H 7300 2831 60  0000 C CNN
F 2 "24FV32KA302A:PIC24F32KA302-I&slash_SS" H 7300 2790 60  0001 C CNN
F 3 "" H 2000 2550 60  0000 C CNN
	1    2000 2550
	1    0    0    -1  
$EndComp
$Comp
L PIC:Pickit_3 U?
U 1 1 5F6DC992
P 950 1500
F 0 "U?" H 987 2015 50  0000 C CNN
F 1 "Pickit_3" H 987 1924 50  0000 C CNN
F 2 "" H 950 1500 50  0001 C CNN
F 3 "" H 950 1500 50  0001 C CNN
	1    950  1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 1550 1500 1550
Wire Wire Line
	1500 1550 1500 2850
Wire Wire Line
	1500 2850 2000 2850
Wire Wire Line
	1300 1650 1400 1650
Wire Wire Line
	1400 1650 1400 2950
Wire Wire Line
	1400 2950 2000 2950
Wire Wire Line
	1300 1450 1650 1450
Wire Wire Line
	1650 1450 1650 3250
Wire Wire Line
	1650 3250 2000 3250
Wire Wire Line
	1300 1350 1550 1350
Wire Wire Line
	1550 1350 1550 3750
Wire Wire Line
	1550 3750 2000 3750
$Comp
L Device:R R1
U 1 1 5F6DF8B5
P 1850 1350
F 0 "R1" V 1643 1350 50  0000 C CNN
F 1 "1k" V 1734 1350 50  0000 C CNN
F 2 "" V 1780 1350 50  0001 C CNN
F 3 "~" H 1850 1350 50  0001 C CNN
	1    1850 1350
	0    1    1    0   
$EndComp
Wire Wire Line
	1550 1350 1700 1350
Connection ~ 1550 1350
Wire Wire Line
	1300 1250 1600 1250
Wire Wire Line
	1600 1250 1600 900 
Wire Wire Line
	1600 900  2000 900 
Wire Wire Line
	2000 900  2000 1350
Wire Wire Line
	2000 2550 2000 1350
Connection ~ 2000 1350
Wire Wire Line
	12800 1300 12800 3550
Wire Wire Line
	12800 3550 12600 3550
Wire Wire Line
	9200 1300 12800 1300
Wire Wire Line
	12600 3650 13050 3650
Wire Wire Line
	13050 3650 13050 1100
Wire Wire Line
	13050 1100 9200 1100
Text Notes 9750 1000 0    50   ~ 0
Communication I2C\navec un autre uC
Text Notes 9200 1050 0    50   ~ 0
SCL\n
Text Notes 9200 1250 0    50   ~ 0
SDA
Wire Wire Line
	2000 3150 1350 3150
Wire Wire Line
	1350 3150 1350 4900
Wire Wire Line
	1350 4900 1650 4900
Text Notes 1700 4900 0    50   ~ 0
SIG ou RAW
Wire Wire Line
	1650 3250 1150 3250
Wire Wire Line
	1150 3250 1150 5150
Wire Wire Line
	1150 5150 1650 5150
Connection ~ 1650 3250
Wire Wire Line
	1550 3750 950  3750
Wire Wire Line
	950  3750 950  5300
Wire Wire Line
	950  5300 1650 5300
Connection ~ 1550 3750
Text Notes 1700 5150 0    50   ~ 0
Vss (GND)\n
Text Notes 1700 5300 0    50   ~ 0
Vdd
$EndSCHEMATC
