#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "==========================" << endl;
    cout << "   Simple C++ Calculator  " << endl;
    cout << "==========================" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    cout << "==========================" << endl;
    cout << "      Program Ended       " << endl;
    cout << "==========================" << endl;

    return 0;
}