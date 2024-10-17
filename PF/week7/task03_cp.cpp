#include <iostream>
using namespace std;
int totalDigits(int number)
{
    int count = 0;

    if (number == 0)
        return 1;
    while (number != 0)
    {
        number /= 10;
        count++;
    }

    return count;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int digits = totalDigits(number);
    cout << "Total number of digits: " << digits;
    return 0;
}