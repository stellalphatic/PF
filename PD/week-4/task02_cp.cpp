#include <iostream>
using namespace std;

float pyramidVolume(float, float, float, string);

int main()
{
    float length, width, height;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    float volume = pyramidVolume(length, width, height, unit);

    cout << "The volume of the pyramid is: " << volume << " cubic " << unit << endl;
}

float pyramidVolume(float length, float width, float height, string unit)
{
    float volume = ((length * width) / 3) * height;
    if (unit == "millimeters")
        return volume * 1000;
    else if (unit == "centimeters")
        return volume * 100;
    else if (unit == "kilometers")
        return volume * 0.001;
    else if (unit == "meters")
        return volume;
}