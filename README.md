# Basic Programming Final Project: Simple Calculator
This project is the final assignment for the basic programming algorithm practicum. The objective is to develop a simple calculator that performs arithmetic operations, including addition, subtraction, multiplication, division, and exponentiation with proper precedence rules. The program also includes error detection for issues like consecutive operators and missing spaces.


## How It Works
- The program takes an arithmetic expression as input, where each element (numbers and operators) is separated by a space. The input is stored as a string and splited into two arrays: numbers and operators.
- Before processing, the program checks for errors such as consecutive operators or missing spaces. If valid, the calculation follows standard mathematical precedence (evaluated from left to right when operators have equal precedence):
1. Exponentiation
2. Multiplication & Division
3. Addition & Subtraction
- The output is the computed result. If an invalid operation is detected, the program displays `Operasi invalid` and terminates.

## Output Examples
1. Single-digit addition and subtraction
![image](https://github.com/user-attachments/assets/ba608698-640a-4605-beae-07c5c0cb3fc0)
2. Multi-digit addition and subtraction
![image](https://github.com/user-attachments/assets/7e7a9d7f-9c5d-40fa-a26e-806f03f065c2)
3. Addition, subtraction, multiplication, and division operation
![image](https://github.com/user-attachments/assets/1fcd9e81-7cc3-4898-b985-a8f1e8dda947)
4. Exponential operation
![image](https://github.com/user-attachments/assets/395f370e-f391-4122-b1d2-5352a8104c0d)
5. Error detection
   ![image](https://github.com/user-attachments/assets/9e683b87-85c9-4cb9-88c0-357acf1fd481)
