# Basic Programming Final Project: Simple Calculator
This project is the final assignment for the basic programming algorithm practicum. The objective is to develop a simple calculator that performs arithmetic operations, including addition, subtraction, multiplication, division, and exponentiation with proper precedence rules. The program also includes error detection for issues like consecutive operators and missing spaces.


## How It Works
- The program takes an arithmetic expression as input, where each element (numbers and operators) is separated by a space. The input is stored as a string and splited into two arrays: numbers and operators.
- Before processing, the program checks for errors such as consecutive operators or missing spaces. If valid, the calculation follows standard mathematical precedence (evaluated from left to right when operators have equal precedence):
1. Exponentiation
2. Multiplication & Division
3. Addition & Subtraction
- The output is the computed result. If an invalid operation is detected, the program displays `Operasi invalid` and terminates.
