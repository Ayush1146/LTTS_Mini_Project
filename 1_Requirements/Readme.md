# Requirements

## Introduction

One of the burdensome job in electronics is identifying the resistance value of a resistor by looking at the color band and calculating the resistances, capacitances and inductances in various series and parallel configurations. The solution to this is **EO** which stands for **"Electronic Operations"**.


## Research

### Electronic operation(EO) features
   **Electronic operation** provides a wide range of features  to its user such as :
	

 - easy calculation of resistance from resistance color code.
 - calculation of two resistances in series.
 - calculation of two resistances in parallel.
 - calculation of two inductors in series.
 - calculation of two inductors in parallel.
 - calculation of two capacitors in series.
 - calculation of two capacitors in parallel.
 
## Cost and Features

## Defining our system
![Description](https://github.com/nikhiljose21/LTTS_Mini_Project/blob/main/1_Requirements/sys.png)

### Explanation

 - Resistance operation
 - Inductance operation
 - Capacitance operation

## SWOT   ANALYSIS

## 4 W's and 1 H

## Detail Requirements 


### High Level Requirements:
|  ID|Description  |Category|Status|
|--|--|--|--|
|  HR01|Resistance operation  |Technical|on going|
|  HR02|Capacitor operation  |Technical|IMPLEMENTED|
|  HR02|Inductor operation  |Technical|IMPLEMENTED|
### Low Level Requirements

|  ID|Description  |HLR ID |Status|
|--|--|--|--|
|LR01|Resistance band operation is done by asking the user the number of bands first. then the user inputs the color of the band in order and this  colors is used to get the resistance of the resistor.|HR01|on going|
|LR02|Calculation of Resistance in series or parallel is done by asking the user what operation to perform and after that the value of the two resistors is input by the user in kilo ohms.|HR01|on going|
|LR03|Calculation of Capacitance in series or parallel is done by asking the user what operation to perform and after that the value of the two capacitor is input by the user in micro farads.|HR02|IMPLEMENTED|
|LR03|Calculation of Inductance in series or parallel is done by asking the user what operation to perform and after that the value of the two inductor is input by the user in milli henry.|HR02|IMPLEMENTED|