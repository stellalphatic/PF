#include <iostream>
int mult(int);
using namespace std;
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int result = mult(number);
}

int mult(int number)
{
    return 5 * number;
}