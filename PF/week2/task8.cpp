#include <iostream>
using namespace std;
int main()
{
    float voltages, current;
    cout << "Enter voltages(in Volts): ";
    cin >> voltages;
    cout << "Enter current(in amperes): ";
    cin >> current;
    cout << "The power is: " << voltages * current << " watts";
}