EESchema Schematic File Version 4
LIBS:PCB_v2-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 4
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 8000 3650 2    50   Input ~ 0
ENC_A
Text HLabel 8000 3800 2    50   Input ~ 0
ENC_!A
Text HLabel 8000 3950 2    50   Input ~ 0
ENC_B
Text HLabel 8000 4100 2    50   Input ~ 0
ENC_!B
Text HLabel 4300 1700 0    50   Input ~ 0
Vreg
Text HLabel 4300 2100 0    50   Input ~ 0
GND
Text HLabel 8600 1900 2    50   Input ~ 0
3.3V
Text Label 4450 1700 0    50   ~ 0
Vreg
Wire Wire Line
	4300 1700 4600 1700
Text Label 4450 2100 0    50   ~ 0
GND
Wire Wire Line
	4600 2100 4300 2100
$Comp
L Device:R R7
U 1 1 5C7C60CD
P 7800 4450
F 0 "R7" V 7593 4450 50  0000 C CNN
F 1 "120" V 7684 4450 50  0000 C CNN
F 2 "Resistor_SMD:R_2010_5025Metric_Pad1.52x2.65mm_HandSolder" V 7730 4450 50  0001 C CNN
F 3 "~" H 7800 4450 50  0001 C CNN
	1    7800 4450
	0    1    1    0   
$EndComp
$Comp
L Device:R R8
U 1 1 5C7C6CF9
P 7800 3400
F 0 "R8" V 7593 3400 50  0000 C CNN
F 1 "120" V 7684 3400 50  0000 C CNN
F 2 "Resistor_SMD:R_2010_5025Metric_Pad1.52x2.65mm_HandSolder" V 7730 3400 50  0001 C CNN
F 3 "~" H 7800 3400 50  0001 C CNN
	1    7800 3400
	0    1    1    0   
$EndComp
Wire Wire Line
	5000 2000 5900 2000
Wire Wire Line
	5500 2100 5900 2100
Text HLabel 8600 2100 2    50   Input ~ 0
A
Text HLabel 8600 2200 2    50   Input ~ 0
B
Wire Wire Line
	8600 2100 8100 2100
Wire Wire Line
	8100 2200 8600 2200
Text Label 5650 1900 2    50   ~ 0
Vreg
Wire Wire Line
	5500 1900 5900 1900
Text Label 8250 2000 0    50   ~ 0
GND
Wire Wire Line
	8100 2000 8400 2000
NoConn ~ 8100 2300
NoConn ~ 8100 2400
NoConn ~ 8100 2500
NoConn ~ 8100 2600
NoConn ~ 8100 2700
NoConn ~ 8100 2800
NoConn ~ 5900 2800
NoConn ~ 5900 2700
NoConn ~ 5900 2600
NoConn ~ 5900 2500
NoConn ~ 5900 2400
NoConn ~ 5900 2300
NoConn ~ 5900 2200
Wire Wire Line
	8100 1900 8600 1900
$Comp
L PCB_v2-rescue:SN65LVDT34D-MyLibrary-PCB_v2-rescue-PCB_v2-rescue U3
U 1 1 5DD37C3C
P 5900 3650
F 0 "U3" H 7000 3937 60  0000 C CNN
F 1 "SN65LVDT34D-MyLibrary" H 7000 3831 60  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 7000 3890 60  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn65lvdt33.pdf" H 5900 3650 60  0001 C CNN
	1    5900 3650
	1    0    0    -1  
$EndComp
$Comp
L PCB_v2-rescue:SN74LVC245APWE4-MyLibrary-PCB_v2-rescue U2
U 1 1 5DD3B7B6
P 5900 1900
F 0 "U2" H 7000 2287 60  0000 C CNN
F 1 "SN74LVC245APWE4" H 7000 2181 60  0000 C CNN
F 2 "Package_SO:TSSOP-20_4.4x6.5mm_P0.65mm" H 7000 2140 60  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74lvc245a.pdf" H 5900 1900 60  0001 C CNN
	1    5900 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 4100 5800 4100
Wire Wire Line
	6500 3650 5800 3650
Text Label 5800 3650 0    50   ~ 0
Vreg
Text Label 5800 4100 0    50   ~ 0
GND
Wire Wire Line
	7500 3650 7950 3650
Wire Wire Line
	7500 3800 7650 3800
Wire Wire Line
	7500 3950 7650 3950
Wire Wire Line
	7500 4100 7950 4100
Wire Wire Line
	7950 4450 7950 4100
Connection ~ 7950 4100
Wire Wire Line
	7950 4100 8000 4100
Wire Wire Line
	7650 4450 7650 3950
Connection ~ 7650 3950
Wire Wire Line
	7650 3950 8000 3950
Wire Wire Line
	7650 3400 7650 3800
Connection ~ 7650 3800
Wire Wire Line
	7650 3800 8000 3800
Wire Wire Line
	7950 3400 7950 3650
Connection ~ 7950 3650
Wire Wire Line
	7950 3650 8000 3650
Wire Wire Line
	5500 2100 5500 3950
Wire Wire Line
	5500 3950 6500 3950
Wire Wire Line
	5000 2000 5000 3800
Wire Wire Line
	5000 3800 6500 3800
$EndSCHEMATC
