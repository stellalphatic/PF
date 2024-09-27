#include <iostream>
using namespace std;
void longestTime(float, float);
int main()
{
    float hours, minutes;
    cout << "Enter number of Hours: ";
    cin >> hours;
    cout << "Enter number of minutes: ";
    cin >> minutes;
    longestTime(hours, minutes);
}

void longestTime(float hours, float minutes)
{
    if (hours * 60 > minutes)
        cout << hours;
    else if (hours * 60 < minutes)
        cout << minutes;
    else
        cout << "both are equal";
}