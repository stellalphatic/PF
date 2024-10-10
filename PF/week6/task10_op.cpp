#include <iostream>
using namespace std;
bool areSameNumber(int num1, int num2, int num3)
{
    if (num1 == num2 && num1 == num3)
        return 1;

    return 0;
}
int main()
{
    int first, second, third;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;

    cout << areSameNumber(first, second, third);
    return 0;
}