# BEE208-LED-Resistor-Value-Calculator-System
Topic
LED Resistor Value Calculator System
Introduction
A Light Emitting Diode (LED) is one of the most commonly used electronic components in electrical and electronic circuits. However, LEDs require a current-limiting resistor to prevent excessive current from flowing through them. If the correct resistor is not used, the LED may become damaged or fail to operate properly.
To solve this problem, we developed a C++ application that calculates the correct resistor value and power rating based on user input.
Problem Statement
Many students and beginners choose LED resistor values by guessing or copying values from other circuits. This can lead to:
Excessive current flowing through the LED.
Damage to the LED.
Poor circuit performance.
Our project provides a simple and accurate way to calculate the correct resistor value before building the circuit.
Aim of the Project
The aim of this project is to design and implement a C++ program that calculates the recommended resistor value for an LED circuit and provides safety guidance to the user.
Objectives
The objectives of our project are:
To accept the LED name from the user.
To accept the supply voltage.
To accept the LED forward voltage.
To accept the desired LED current.
To validate all user inputs.
To calculate the resistor value using Ohm's Law.
To calculate the resistor power rating.
To display whether the design is accepted or invalid.
To save the report into a text file.
Formula Used
Our program uses Ohm's Law.
First, we convert the LED current from milliamperes to amperes.
Current (A) = Current (mA) ÷ 1000
Then we calculate the resistor value.
Resistor = (Supply Voltage − Forward Voltage) ÷ Current
Finally, we calculate the resistor power.
Power = Current × Current × Resistor
 
C++ Concepts Used
The project uses several C++ concepts, including:
Classes and Objects
Functions
Variables
Data Types
Input and Output (cin and cout)
Conditional Statements (if, else if, else)
Loops
Vectors
These concepts help make the program organized, efficient, and easy to maintain.
 
 
Algorithm
1. Our algorithm follows these steps:
2. Start the program.
3. Display the program title.
4. Enter the number of LED circuits.
5. Collect all required inputs.
6. Validate the input values.
7. Convert current from milliamperes to amperes.
8. Calculate the resistor value.
9. Calculate the resistor power.
10. Display the results.
11. Save the report.
12. End the program.
 
Pseudocode
Our pseudocode explains the logic before coding.
It starts by displaying the title.
The program then accepts all user inputs.
It checks whether the inputs are valid.
If the values are valid, it performs the calculations and displays the results.
Otherwise, it displays an error message.
Finally, it saves the report and ends the program.
 
Flowchart
Our flowchart shows the complete sequence of the program.
It begins with the Start symbol.
The user enters the required information.
The program validates the inputs.
If the values are invalid, an error message is displayed.
If they are valid, the resistor value and power are calculated.
The results are displayed and saved before the program ends.
 
Demonstration
Our program asks the user to enter:
LED name
• Supply voltage
• Forward voltage
• Desired current
The program validates the inputs.
If the values are correct, it calculates:


NAMES OF STUDENTS AND THEIR ID'S
1. Assah Obed Gyan
2. ⁠Kumi kelvin 01246629B
3. Genevieve Welbeck 01244449B
4. Janet Owusuaa Appiah  01243119B
5. ⁠Richmond Aidoo 01245869B
6. ⁠Boakoh Samuel Okyere 01245186B
7. ⁠ISSIF kamaldeen 01246507B
8. Akatey Anita 01240064B 
9. Manieson Nathaniel 01246276B
10. ⁠Dzobo Edward Orlando Yaw-01243978B
• Recommended resistor value
• Minimum resistor power rating
It then displays whether the design is accepted or invalid.
Finally, it saves all calculations into led_resistor_report.txt.
