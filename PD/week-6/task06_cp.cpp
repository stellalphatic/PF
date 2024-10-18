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
int primorial(int number)
{
    int count = 0;
    int numCheck = 2;
    int product = 1;
    while (count != number)
    {
        if (isPrime(numCheck))
        {
            count++;
            product *= numCheck;
        }
        numCheck++;
    }
    return product;
}
int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    cout << primorial(number);
    return 0;
}