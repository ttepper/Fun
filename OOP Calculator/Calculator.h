//Program: Simple Calculator Class
//Setup :
//Header File(Calculator.h) : Define a class Calculator with private member variables to store two numbers.
//Source File(Calculator.cpp) : Implement methods to perform basic arithmetic operations(addition, subtraction, multiplication, division) on these numbers.
//EndUserTest File(EndUserTest.cpp) : Create a simple user interface where users can input two numbers, choose an operation, and see the result.
//Requirements :
//	Class Definition : In Calculator.h, define the Calculator class with two private double variables.
//	Method Definitions : Include methods in the class for addition, subtraction, multiplication, and division.
//	User Input : In EndUserTest.cpp, write code to take two numbers from the user.
//	Operation Choice : Allow the user to select which operation to perform.
//	Display Results : Show the result of the operation.
//	Suggestions :
//	Use exception handling to deal with division by zero.
//	You might add a function that displays a menu and handles user input within the EndUserTest.cpp.

#pragma once
using namespace std;
#include <iostream>

class Calculator
{
public:
	void runCalc();
private:
	int number1, number2;
	char operation;
};
