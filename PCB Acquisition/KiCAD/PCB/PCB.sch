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
L Connector:Conn_01x05_Female J1
U 1 1 600A24D0
P 900 1400
F 0 "J1" H 792 1785 50  0000 C CNN
F 1 "Conn_01x05_Female" H 792 1694 50  0000 C CNN
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
Text Notes 800  1550 1    50   ~ 0
Pickit 3
Wire Wire Line
	1550 3750 2150 3750
Wire Wire Line
	1650 3250 2150 3250
Wire Wire Line
	1350 3150 2150 3150
Wire Wire Line
	1400 2950 2150 2950
Wire Wire Line
	1500 2850 2150 2850
Wire Wire Line
	2000 2550 2150 2550
$Comp
L dk_Sockets-for-ICs-Transistors:ED281DT J3
U 1 1 6023F95E
P 2450 3050
F 0 "J3" H 2400 3775 50  0000 C CNN
F 1 "ED281DT" H 2400 3684 50  0000 C CNN
F 2 "digikey-footprints:Socket_DIP-28_7.62mm_Conn" H 2650 3250 60  0001 L CNN
F 3 "https://media.digikey.com/pdf/Data%20Sheets/On%20Shore%20PDFs/EDXXXDT_Dwg.pdf" H 2650 3350 60  0001 L CNN
F 4 "ED3050-5-ND" H 2650 3450 60  0001 L CNN "Digi-Key_PN"
F 5 "ED281DT" H 2650 3550 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 2650 3650 60  0001 L CNN "Category"
F 7 "Sockets for ICs, Transistors" H 2650 3750 60  0001 L CNN "Family"
F 8 "https://media.digikey.com/pdf/Data%20Sheets/On%20Shore%20PDFs/EDXXXDT_Dwg.pdf" H 2650 3850 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/on-shore-technology-inc/ED281DT/ED3050-5-ND/4147600" H 2650 3950 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN IC DIP SOCKET 28POS TIN" H 2650 4050 60  0001 L CNN "Description"
F 11 "On Shore Technology Inc." H 2650 4150 60  0001 L CNN "Manufacturer"
F 12 "Active" H 2650 4250 60  0001 L CNN "Status"
	1    2450 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 3650 3650 3650
Text Notes 4000 3600 2    50   ~ 0
SDA
Text Notes 4000 3700 2    50   ~ 0
SCL\n
$Comp
L Connector:Conn_01x02_Male J4
U 1 1 600B67EA
P 3850 3550
F 0 "J4" H 3950 3800 50  0000 C CNN
F 1 "Conn_01x02_Male" H 3950 3700 50  0000 C CNN
F 2 "Connector_Molex:Molex_KK-396_A-41791-0002_1x02_P3.96mm_Vertical" H 3850 3550 50  0001 C CNN
F 3 "~" H 3850 3550 50  0001 C CNN
	1    3850 3550
	-1   0    0    -1  
$EndComp
Wire Wire Line
	2650 3550 3650 3550
$EndSCHEMATC
