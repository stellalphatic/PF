#include <iostream>
using namespace std;
void timeTravel(int, int);
int main()
{
    int hours, minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    timeTravel(hours, minutes);
}
void timeTravel(int hours, int minutes)
{

    if (minutes > 44)
    {
        minutes = minutes + 15 - 60;
        hours = hours + 1;
        if (hours >= 24)
            hours = 0;
        cout << hours << " : " << minutes;
    }
    else
        cout << hours << " : " << minutes + 15;
}