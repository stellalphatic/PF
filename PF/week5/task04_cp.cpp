#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float distance, elevation;
    cout << "Enter the distance from the base of tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> elevation;
    cout << "The height of the tree is: " << tan(elevation / 57.2958) * distance << " feet";
}