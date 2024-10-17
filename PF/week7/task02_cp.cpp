#include <iostream>
using namespace std;
void generateFibonacci(int length)
{
    int num1 = 0, num2 = 1, next;
    for (int i = 1; i <= length; i++)
    {
        if (i == 1)
            cout << num1;
        else if (i == 2)
            cout << num2;
        else
        {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
            cout << next;
        }
        cout << ", ";
    }
}
int main()
{
    int length;
    cout << "Enter the length of Fibonacci Series: ";
    cin >> length;
    generateFibonacci(length);

    return 0;
}