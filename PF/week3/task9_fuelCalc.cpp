#include <iostream>
using namespace std;
void calFuel(float);

int main()
{
    float distance;
    cout << "Enter the distance: ";
    cin >> distance;
    calFuel(distance);
}

void calFuel(float distance)
{
    if (distance * 10 < 100)
        cout << "Fuel needed: " << 100;
    else
        cout << "Fuel needed: " << distance * 10 << endl;
}