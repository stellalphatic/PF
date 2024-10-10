#include <iostream>
using namespace std;
int main()
{
    string name;
    int matric, inter, ecat;
    cout << "Enter the student's name: ";
    cin >> name;
    cout << "Enter matriculation marks(out of 1100): ";
    cin >> matric;
    cout << "Enter intermediate marks(out of 550): ";
    cin >> inter;
    cout << "Enter ecat marks(out of 400): ";
    cin >> ecat;
    float aggregate = 50 * (ecat / 400.0) + 40 * (inter / 550.0) + 10 * (matric / 1100.0);
    cout << "Aggregate score for Mirza in UET is: " << aggregate << "%";
}