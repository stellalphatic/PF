#include <iostream>
using namespace std;
void evenOrOdd(int);

int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    evenOrOdd(number);
}

void evenOrOdd(int number)
{
    if (number % 2 == 0)
        cout << "Number " << number << " is even";
    else
        cout << "Number " << number << " is odd";
}