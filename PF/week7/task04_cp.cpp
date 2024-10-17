#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit)
{
    int frequency = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
            frequency++;
        number /= 10;
    }
    return frequency;
}
int main()
{
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to Check: ";
    cin >> digit;
    cout << "Frequency: " << frequencyChecker(number, digit);
    return 0;
}