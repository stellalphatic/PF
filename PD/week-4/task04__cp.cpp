#include <iostream>
using namespace std;
void calculateProjectTime(int hours, int days, int workers);
main()
{
    int hours, days, workers;
    cout << "Enter the needed hours : ";
    cin >> hours;
    cout << "Enter the number of days that the firm has : ";
    cin >> days;
    cout << "Enter the number of workers : ";
    cin >> workers;
    calculateProjectTime(hours, days, workers);
}
void calculateProjectTime(int hours, int days, int workers)
{

    days = days * .9;
    int hoursPerDay = 10;
    int workingHours = days * hoursPerDay * workers;

    if (workingHours > hours)
    {
        cout << "YES! " << (workingHours - hours) << " more hours";
    }
    else
    {
        cout << "Not enough time. " << hours - workingHours << " hours left";
    }
}