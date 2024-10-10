#include <iostream>
using namespace std;
int greatest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
    }
    else if (b > a)
    {
        if (b > c)
            return b;
    }
    return c;
}
int main()
{
    int first, second, third;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;

    cout << "The greatest number among " << first << " " << second << " " << third << " is " << greatest(first, second, third);
    return 0;
}