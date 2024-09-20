#include <iostream>
using namespace std;
int main()
{
    string name;
    float target;
    cout << "Enter name of the person: ";
    cin >> name;
    cout << "Enter the target weight loss in kilograms: ";
    cin >> target;

    cout << "Amir will need " << target * (15) * 1.0 << " days to lose " << target << " kg of weight by following doctor's suggestions";
}