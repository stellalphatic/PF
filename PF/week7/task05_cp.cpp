#include <iostream>
using namespace std;
int digitSum(int number)
{
    int sum;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << digitSum(number);

    return 0;
}