#include <iostream>
using namespace std;
void printTable(int number)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " X " << i << " = " << i * number << endl;
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printTable(number);
    return 0;
}