/*
    This is the advanced calculator which performs the arithmatic operations, trigonometric ,
    exponential and logarithmic operations.
*/

#include <bits/stdc++.h>
using namespace std;

void arithmeticOp()
{
    int t = 1;
    while (t--)
    {
        double num1, num2;
        char op;
        cout << "Enter two numbers on which you want to perform your operation." << endl;
        cin >> num1 >> num2;
        cout << "Enter the operation which you want to perform(+,-,*,/):" << endl;
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "The result is " << num1 + num2 << endl;
            break;

        case '-':
            cout << "The result is " << num1 - num2 << endl;
            break;

        case '*':
            cout << "The result is " << num1 * num2 << endl;
            break;

        case '/':
            cout << "The result is " << num1 / num2 << endl;
            break;

        default:
            cout << "Invalid operator entered!" << endl;
        }
        cout << "Press:\t 1-To calculate more arithmatic Operation\t 0-To exit" << endl;
        int val;
        cin >> val;
        if (val == 1)
        {
            t = 1;
        }
        else
        {
            break;
        }
    }
}

void trigonometricOp()
{

    int t = 1;

    while (t--)
    {
        int choice;
        cout << "Press:\t 1-Sine Function\t2-Cosine Function\t3-Tangent Function" << endl;
        cin >> choice;
        float value;
        cout << "Enter value of angle (in radian):" << endl;
        cin >> value;
        switch (choice)
        {
        case 1:
            cout << "Sine value of " << value << " is " << sin(value) << endl;
            break;

        case 2:
            cout << "Cosine value of " << value << " is " << cos(value) << endl;
            break;

        case 3:
            cout << "Tangent value of " << value << " is " << tan(value) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "Press:\t 1-To perform more trigonometric operations\t 0-To exit" << endl;
        int val;
        cin >> val;
        if (val == 1)
        {
            t = 1;
        }
        else
        {
            break;
        }
    }
}

void exponentialOp()
{
    int t = 1;
    while (t--)
    {
        float base, index;
        cout << "Enter the base number: " << endl;
        cin >> base;

        cout << "Enter the index number: " << endl;
        cin >> index;

        cout << "The value of the entered number is: " << pow(base, index) << endl;

        cout << "Press:\t 1-To perform more exponential operations\t 0-To exit" << endl;
        int val;
        cin >> val;
        if (val == 1)
        {
            t = 1;
        }
        else
        {
            break;
        }
    }
}

void logarithmicOp()
{
    int t = 1;

    while (t--)
    {
        float value;
        cout << "Enter the number to calculate log(e)" << endl;
        cin >> value;
        cout << "The log value of entered number is " << log(value) << endl;
        cout << "Press:\t 1-To perform more logarithmic operations\t 0-To exit" << endl;
        int val;
        cin >> val;
        if (val == 1)
        {
            t = 1;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int choice;
    cout << "Enter the type of calculation you want to perform.Press" << endl;
    cout << "1-Arithmetic Operation\n2-Trigonometric Operation\n3-Exponential Operation\n4-Logarithmic Operation " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        arithmeticOp();
        break;

    case 2:
        trigonometricOp();
        break;

    case 3:
        exponentialOp();
        break;

    case 4:
        logarithmicOp();
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "Thank You" << endl;

    return 0;
}