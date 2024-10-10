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
    cout << "Fuel needed: " << distance * 10 << endl;
}