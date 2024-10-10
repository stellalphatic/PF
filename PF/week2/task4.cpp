#include <iostream>
using namespace std;
int main()
{
    int time;
    float charge;
    cout << "Enter the charge(Q) in coulumbs: ";
    cin >> charge;
    cout << "Enter the time(t) in seconds: ";
    cin >> time;
    cout << "The current(I) is: " << charge / time << " Amperes";
}