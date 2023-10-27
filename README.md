# introtocpp
C++ is a cross-platform language that can be used to create high-performance applications.
C++ was developed by Bjarne Stroustrup, as an extension to the C language.
C++ gives programmers a high level of control over system resources and memory.
The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

## THEORY
### a)Syntax for basics<br>
#include <iostream> is a header file library that lets us work with input and output objects, such as cout.<br>
using namespace std means that we can use names for objects and variables from the standard library.<br>
A blank line. C++ ignores white space. But we use it to make the code more readable.<br>
Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.<br>
cout is an object used together with the insertion operator (<<) to output/print text.<br>
return 0 ends the main function.<br>
### b)User Input
cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).<br>
### c)Data Types
boolean	1 byte	      Stores true or false values<br>
char	  1 byte	      Stores a single character/letter/number, or ASCII values<br>
int	    2 or 4 bytes	Stores whole numbers, without decimals<br>
float	  4 bytes      	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits<br>
double	8 bytes	      Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits<br>
### d)Operators
An operator is a symbol that operates on a value to perform specific mathematical or logical computations.They form the foundation of any programming language. In C++, we have built-in operators to provide the required functionality.<br>
These can be classified into:<br>
Arithmetic Operators,Relational Operators,Logical Operators,Bitwise Operators,Assignment Operators,Ternary or Conditional Operators.<br>
### e)Bitwise operators
The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. <br> 
The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. <br>
The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. <br>
The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift.<br> 
The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. <br>
The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.<br>
### f)Loops
1)For Loop<br>
The C++ for loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop than while or do-while loops.<br>
2)while loop<br>
The while loop loops through a block of code as long as a specified condition is true.<br>
3)Do-While loop<br>
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.<br>

## ALGORITHM
a)Basics
Start<br>
Display the text "Hello, world!" to the console.<br>
End<br>
<br>
b)Data types & Boolean datatypes<br>
Start<br>
Declare an integer variable myIntVar to store an integer input value.<br>
Display the message "myIntVar=" and read an integer value from the user into myIntVar.<br>
Declare a float variable myFloatVar to store a floating-point input value.<br>
Display the message "myFloatVar=" and read a float value from the user into myFloatVar.<br>
Declare a string variable myStrVar to store a string input value.<br>
Display the message "myStrVar =" and read a string value from the user into myStrVar.<br>
Declare a char variable myCharVar to store a character input value.<br>
Display the message "myCharVar =" and read a character value from the user into myCharVar.<br>
Display the input values and their respective sizes in bytes:<br>
a. Print "myIntVar=" followed by the value of myIntVar.<br>
b. Print "size of myIntVar=" followed by the size of myIntVar in bytes.<br>
c. Print "myFloatVar=" followed by the value of myFloatVar.<br>
d. Print "size of myFloatVar=" followed by the size of myFloatVar in bytes.e. Print "myStrVar =" followed by the value of myStrVar.<br>
f. Print "size of myStrVar =" followed by the size of myStrVar in bytes.<br>
g. Print "myCharVar=" followed by the value of myCharVar.<br>
h. Print "size of myCharVar=" followed by the size of myCharVar in bytes.<br>
Define a constant integer variable myNum with a value of 14 and display it.<br>
Declare a bool variable A and initialize it with the value true.<br>
Declare a double variable c and initialize it with the value 7.985163.<br>
Declare a short integer variable b and initialize it with the value 14.<br>
Declare a long integer variable d and initialize it with the value 80.<br>
Print the size of the bool data type.<br>
End<br>
<br>
c)Operators<br>
Start<br>
Declare integer variables a, b, sum, diff, product, quotient, and remainder to store user input and results of arithmetic operations.<br>
Display "Enter first number:" and read an integer value into variable a.<br>
Display "Enter second number:" and read an integer value into variable b.<br>
Calculate the sum of a and b and store it in the variable sum.<br>
Display "The sum is:" followed by the value of sum.<br>
Repeat steps 3 to 6 for the following arithmetic operations:
Subtraction: Calculate diff = a - b and display "The difference is:" followed by the value of diff.<br>
Multiplication: Calculate product = a * b and display "The product is:" followed by the value of product.<br>
Division: Calculate quotient = a / b and display "The quotient is:" followed by the value of quotient.<br>
Modulus: Calculate remainder = a % b and display "The remainder is:" followed by the value of remainder.<br>
End<br>
<br>
d)Loops<br>
Start<br>
Declare an integer variable prn to store the PRN.<br>
Display "enter prn :" and read an integer value into prn.<br>
Declare an integer array dig[5] to store the individual digits of the PRN.<br>
Using a loop with the control variable i running from 0 to 4:<br>
a. Calculate the last digit of the PRN by taking the remainder of prn when divided by 10, and store it in dig[i].<br>
b. Update prn by dividing it by 10 to remove the last digit.<br>
Using another loop with the control variable i running from 0 to 4:<br>
a. Print each digit stored in the dig array in the order they were extracted.<br>
End<br>
<br>
## CONCLUSION
Hence in this repository a glimpse of the basics of c++was taken and programs using data types,operators,and loops were performed.







