#include "Calculator.h"
using namespace std;

void Calculator::runCalc()
{
    cout << "Welcome to the Calculator" << endl;
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

   
        switch (operation)
        {
        case '+':
            cout << "Result: " << (number1 + number2) << endl;
            break;
        case '-':
            cout << "Result: " << (number1 - number2) << endl;
            break;
        case '*':
            cout << "Result: " << (number1 * number2) << endl;
            break;
        case '/':
            cout << "Result: " << (number1 / number2) << endl;
            /*if (number2 != 0)
                cout << "Result: " << static_cast<double>(number1) / number2 << endl;
            else
                cout << "Cannot divide by zero." << endl;
            break;*/
        default:
            cout << "Invalid operation." << endl;
            break;
        }
 
}

