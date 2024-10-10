#include <iostream>
using namespace std;
bool parityAnalysis(int number)
{
    int sum = 0;
    int n = number;
    while (number != 0)
    {
        sum = sum + number % 10;
        number /= 10;
    }
    if (!(n & 1) && !(sum & 1))
        return true;
    else if ((n & 1) && (sum & 1))
        return true;
    return false;
}
int main()
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    cout << parityAnalysis(number);
    return 0;
}