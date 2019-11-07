EESchema Schematic File Version 4
LIBS:PCB_v2-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	3600 3650 3600 3800
Wire Wire Line
	5150 3650 5150 3800
Wire Wire Line
	6550 3650 6550 3800
Text HLabel 2750 3450 0    50   Input ~ 0
UHSG
Text HLabel 2750 3800 0    50   Input ~ 0
U
Text HLabel 2750 4150 0    50   Input ~ 0
ULSG
Text HLabel 4600 3450 0    50   Input ~ 0
VHSG
Text HLabel 4600 4150 0    50   Input ~ 0
VLSG
Text HLabel 4600 3800 0    50   Input ~ 0
V
Text HLabel 6050 3450 0    50   Input ~ 0
WHSG
Text HLabel 6050 3800 0    50   Input ~ 0
W
Text HLabel 6050 4150 0    50   Input ~ 0
WLSG
Wire Wire Line
	2750 3450 3300 3450
Wire Wire Line
	2750 3800 3600 3800
Connection ~ 3600 3800
Wire Wire Line
	3600 3800 3600 3950
Wire Wire Line
	2750 4150 3300 4150
Wire Wire Line
	4600 3450 4850 3450
Wire Wire Line
	4600 3800 5150 3800
Connection ~ 5150 3800
Wire Wire Line
	5150 3800 5150 3950
Wire Wire Line
	4600 4150 4850 4150
Wire Wire Line
	6050 3450 6250 3450
Wire Wire Line
	6050 3800 6550 3800
Connection ~ 6550 3800
Wire Wire Line
	6550 3800 6550 3950
Text HLabel 2750 3050 0    50   Input ~ 0
Vm
Wire Wire Line
	2750 3050 3600 3050
Wire Wire Line
	3600 3050 3600 3250
Wire Wire Line
	3600 3050 5150 3050
Wire Wire Line
	5150 3050 5150 3250
Connection ~ 3600 3050
Wire Wire Line
	5150 3050 6550 3050
Wire Wire Line
	6550 3050 6550 3250
Connection ~ 5150 3050
Wire Wire Line
	3600 4350 3600 4600
Wire Wire Line
	3600 4600 5150 4600
Wire Wire Line
	6550 4600 6550 4350
Wire Wire Line
	5150 4350 5150 4600
Connection ~ 5150 4600
Wire Wire Line
	5150 4600 6550 4600
$Comp
L Device:R R6
U 1 1 5BDBA233
P 5150 4950
F 0 "R6" H 5220 4996 50  0000 L CNN
F 1 "0.025" H 5220 4905 50  0000 L CNN
F 2 "Resistor_SMD:R_2512_6332Metric_Pad1.52x3.35mm_HandSolder" V 5080 4950 50  0001 C CNN
F 3 "~" H 5150 4950 50  0001 C CNN
	1    5150 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 4600 5150 4750
Text Notes 4550 5000 0    50   ~ 0
ISEN Resistor
Text HLabel 5150 5400 3    50   Input ~ 0
GND
Wire Wire Line
	5150 5100 5150 5400
Wire Wire Line
	3600 3800 3850 3800
Wire Wire Line
	6550 3800 6900 3800
Text GLabel 3850 3800 2    50   Input ~ 0
Motor_1
Text GLabel 5350 3800 2    50   Input ~ 0
Motor_2
Text GLabel 6900 3800 2    50   Input ~ 0
Motor_3
Wire Wire Line
	5150 3800 5350 3800
Wire Wire Line
	6250 4150 6050 4150
Wire Wire Line
	5150 4750 4450 4750
Connection ~ 5150 4750
Wire Wire Line
	5150 4750 5150 4800
Text HLabel 4450 4750 0    50   Input ~ 0
ISEN
$Comp
L Device:Q_NMOS_GDS Q1
U 1 1 5BE5601E
P 3500 3450
F 0 "Q1" H 3706 3496 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 3706 3405 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 3700 3550 50  0001 C CNN
F 3 "~" H 3500 3450 50  0001 C CNN
	1    3500 3450
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_GDS Q2
U 1 1 5BE56095
P 3500 4150
F 0 "Q2" H 3706 4196 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 3706 4105 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 3700 4250 50  0001 C CNN
F 3 "~" H 3500 4150 50  0001 C CNN
	1    3500 4150
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_GDS Q3
U 1 1 5BE560AF
P 5050 3450
F 0 "Q3" H 5256 3496 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 5256 3405 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 5250 3550 50  0001 C CNN
F 3 "~" H 5050 3450 50  0001 C CNN
	1    5050 3450
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_GDS Q4
U 1 1 5BE560CF
P 5050 4150
F 0 "Q4" H 5256 4196 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 5256 4105 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 5250 4250 50  0001 C CNN
F 3 "~" H 5050 4150 50  0001 C CNN
	1    5050 4150
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_GDS Q5
U 1 1 5BE560EB
P 6450 3450
F 0 "Q5" H 6656 3496 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 6656 3405 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 6650 3550 50  0001 C CNN
F 3 "~" H 6450 3450 50  0001 C CNN
	1    6450 3450
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_GDS Q6
U 1 1 5BE56113
P 6450 4150
F 0 "Q6" H 6656 4196 50  0000 L CNN
F 1 "Q_NMOS_IRLB8743" H 6656 4105 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 6650 4250 50  0001 C CNN
F 3 "~" H 6450 4150 50  0001 C CNN
	1    6450 4150
	1    0    0    -1  
$EndComp
$EndSCHEMATC
