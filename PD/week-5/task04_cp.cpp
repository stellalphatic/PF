#include <iostream>
using namespace std;
float calculateBill(char service, char time, int minutes)
{
    if (service == 'r' || service == 'R')
    {
        minutes -= 50;
        if (minutes <= 0)
            return 10;
        return 10 + minutes * 0.2;
    }
    if (service == 'P' || service == 'p')
    {
        if (time == 'n' || time == 'N')
        {
            minutes -= 75;
            if (minutes <= 0)
                return 25;
            return 25 + minutes * 0.1;
        }
        if (time == 'd' || time == 'D')
        {
            minutes -= 100;
            if (minutes <= 0)
                return 25;
            return 25 + minutes * 0.05;
        }
    }
}
int main()
{
    int minutes;
    char service, time;
    cout << "Enter the service code(R/r for regular,P/p for premium): ";
    cin >> service;
    if (service == 'p' || service == 'P')
    {
        cout << "Enter the time of call(D/d for day,N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> minutes;
    if (service == 'p' || service == 'P')
        cout << "Service type: Premium" << endl;
    if (service == 'r' || service == 'R')
        cout << "Service type: Regular" << endl;
    cout << "Total Minutes used: " << minutes << " minutes" << endl;
    cout << "Amount due: $" << calculateBill(service, time, minutes) << endl;

    return 0;
}