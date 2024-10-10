#include <iostream>
using namespace std;
void Calc();

int main()
{
    Calc();
}
void Calc()
{
    char op;
    int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Operator(*,+,-,/): ";
    cin >> op;
    if (op == '+')
        cout << "Sum: " << num1 + num2;
    else if (op == '-')
        cout << "Difference: " << num1 - num2;
    else if (op == '*')
        cout << "Product: " << num1 * num2;
    else if (op == '/')
        cout << "Division: " << (float)num1 / num2;
    else
        cout << "Enter Valid Operator";
}