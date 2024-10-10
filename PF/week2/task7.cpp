#include <iostream>
using namespace std;
int main()
{
    int timeInHours;
    cout << "Enter the number of hours: ";
    cin >> timeInHours;
    cout << timeInHours << " is equivalent to " << timeInHours * 60 * 60 << " seconds";
}