#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << min(num1, num2);
}