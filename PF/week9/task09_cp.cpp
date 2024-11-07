#include <iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue)
{
    float sum = 0;
    sum += (change[0] * 0.25);
    sum += (change[1] * 0.1);
    sum += (change[2] * 0.05);
    sum += (change[3] * 0.01);
    if (sum >= totalDue)
        return true;
    return false;
}
int main()
{
    double arr[4], amount;
    cout << "Enter Quarters: ";
    cin >> arr[0];
    cout << "Enter Dimes: ";
    cin >> arr[1];
    cout << "Enter Nickels: ";
    cin >> arr[2];
    cout << "Enter Pennies: ";
    cin >> arr[3];
    cout << "Enter the Total Amount due: $";
    cin >> amount;
    cout << "Can you pay the amount? ";
    if (canPayWithChange(arr, amount))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}