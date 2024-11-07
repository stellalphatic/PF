#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += resistance[i];
    }
    return sum;
}
int main()
{
    int number;
    cout << "Enter the number of resistors in the series ciruit: ";
    cin >> number;
    double arr[number];
    cout << "Enter the resistance values (in ohms) of the " << number << " resistors, one per line:" << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    cout << "The total resistance of the circuit is " << calculateTotalResistance(arr, number) << " ohms." << endl;
    return 0;
}