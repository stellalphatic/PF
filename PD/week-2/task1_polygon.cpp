#include <iostream>
using namespace std;
int main()
{
    int sides;
    cout << "Enter the number of sides of polygon: ";
    cin >> sides;

    cout << "The sum of internal angles of a " << sides << "-sided polygon is: " << (sides - 2) * 180 << " degrees";
}