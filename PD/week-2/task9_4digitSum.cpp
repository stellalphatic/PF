#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter a 4-digit number: ";
    cin >> n;
    // for (int i = 0; i < 4; i++)
    // {
    //     sum += n % 10;
    //     n /= 10;
    // }
    int a = n / 1000;
    int b = (n % 1000) / 100;
    int c = (n % 100) / 10;
    int d = n % 10;
    sum = a + b + c + d;

    cout << "Sum of individual digits: " << sum;
    return 0;
}