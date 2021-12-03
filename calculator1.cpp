/*
 * @Author: Mihretab Nigatu
 * @Date: 2021-11-27 09:54:24
 * @LastEditTime: 2021-11-28 20:57:14
 * @LastEditors: Please set LastEditors
 * @Description: The first try of calculator for 2 inputs only using C++ programing languge for school project.
 * @FilePath: /SRC Code/calculator1.cpp
 */
# include <iostream>
using namespace std;

int main() {
    char opreation;
    float num1, num2;


    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter operator: + for Addition, ";
    cout << " - for Subtraction, ";
    cout << " / for Division, ";
    cout << " * for Multiplication, ";
    cin >> opreation;

    cout << "Enter the second number : ";
    cin >> num2;

    switch(opreation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
                        cout << "Error! operator is not correct";
            break;
    }
    cout << "    Thank you for using me Have a nice day.           ";

    return 0;
}