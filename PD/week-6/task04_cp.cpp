#include <iostream>
using namespace std;
int dotsInTriangle(int number)
{
    int dotSpacing = 2;
    int dotNumbers = 1;
    if (number == 1)
        return 1;
    for (int i = 2; i <= number; i++)
    {
        dotNumbers += dotSpacing;
        dotSpacing++;
    }
    return dotNumbers;
}
int main()
{
    int number;
    cout << "Enter number of triangle: ";
    cin >> number;
    cout << "Dots in the Triangle: " << dotsInTriangle(number);
    return 0;
}