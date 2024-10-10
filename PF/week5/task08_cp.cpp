#include <iostream>
using namespace std;
string OddishOrEvenish(int);
int main()
{
    int number;
    cout << "Enter a five-digit number: ";
    cin >> number;
    cout << OddishOrEvenish(number) << endl;
}

string OddishOrEvenish(int number)
{
    int lastDigit, sum;
    while (number != 0)
    {
        lastDigit = number % 10;
        sum += lastDigit;
        number = number / 10;
    }

    if (sum % 2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}