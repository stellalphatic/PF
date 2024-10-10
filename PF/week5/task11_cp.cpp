#include <iostream>
using namespace std;
void calculatePoolState(float, float, float, float);
int main()
{
    float volume, flowRate1, flowRate2, hours;
    cout << "Enter volume of the pool in litres: ";
    cin >> volume;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> flowRate1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> flowRate2;
    cout << "Enter hours that the worker is absent: ";
    cin >> hours;
    calculatePoolState(volume, flowRate1, flowRate2, hours);
}
void calculatePoolState(float volume, float flowRate1, float flowRate2, float hours)
{

    float volumeFilled = (flowRate1 * hours) + (flowRate2 * hours);

    if (volumeFilled < volume)
        cout << "The pool is " << (volumeFilled / volume) * 100 << "% Full. Pipe 1: " << (flowRate1 * hours / volumeFilled) * 100 << "% .Pipe 2: " << (flowRate2 * hours / volumeFilled) * 100 << "%" << endl;
    else
        cout << "For " << hours << " hours,the pool overflows with " << volumeFilled - volume << " liters." << endl;
}