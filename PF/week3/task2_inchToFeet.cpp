#include <iostream>
using namespace std;
void inchesToFoot(float);

int main()
{
    float inches;
    cout << "Enter measurements in Inches: ";
    cin >> inches;
    inchesToFoot(inches);
}

void inchesToFoot(float inches)
{
    cout << "Equivalent in feet: " << inches / 12 << endl;
}