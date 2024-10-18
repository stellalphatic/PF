#include <iostream>
using namespace std;
bool isPrime(int number)
{
    if (number == 2)
        return 1;
    for (int i = number / 2; i >= 2; i--)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << isPrime(number);
    return 0;
}