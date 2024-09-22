#include <iostream>
using namespace std;
int main()
{
    int initial, acc, time;
    cout << "Enter initial Velocity(m/s): ";
    cin >> initial;
    cout << "Enter Acceleration(m/s^2): ";
    cin >> acc;
    cout << "Enter Time(s): ";
    cin >> time;

    cout << "Final Velocity(m/s): " << acc * time + initial;
}