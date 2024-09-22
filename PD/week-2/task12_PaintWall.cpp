#include <iostream>
using namespace std;
int main()
{
    int number, width, height;
    cout << "Number of Sq. meters you can paint: ";
    cin >> number;
    cout << "Width of single wall(in meters): ";
    cin >> width;
    cout << "Height of single wall(in meters): ";
    cin >> height;

    cout << "Number of walls you can paint: " << number / (width * height);
}