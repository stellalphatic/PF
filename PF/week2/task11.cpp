#include <iostream>
using namespace std;
int main()
{
    int population, birthRate;
    cout << "Enter the current world population: ";
    cin >> population;
    cout << "Enter the birth rate(no. of births per month): ";
    cin >> birthRate;

    cout << "The population in three decades will be: " << 3 * 10 * 12 * birthRate + population;
}