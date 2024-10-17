#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2)
{

    for (int i = min(number1, number2); i > 0; i--)
    {
        if ((number1 % i == 0) && (number2 % i == 0))
        {
            return i;
        }
    }
}
int calculateLCM(int number1, int number2, int gcd)
{
    return (number1 * number2) / gcd;
}
int main()
{
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "GCD: " << calculateGCD(number1, number2) << endl;
    cout << "LCM: " << calculateLCM(number1, number2, calculateGCD(number1, number2)) << endl;

    return 0;
}