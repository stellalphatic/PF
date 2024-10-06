#include <iostream>
using namespace std;
float taxCalculator(char, float);

int main()
{
    float price;
    char vehicleType;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;
    cout << "Enter the price of the vehicle: $";
    cin >> price;

    float tax = taxCalculator(vehicleType, price);

    cout << "The final price of a vehicle of type " << vehicleType << " after adding the tax is $" << tax + price << endl;
}

float taxCalculator(char type, float price)
{
    if (type == 'M')
        return price * 0.06;
    else if (type == 'E')
        return price * 0.08;
    else if (type == 'S')
        return price * 0.1;
    else if (type == 'V')
        return price * 0.12;
    else if (type == 'T')
        return price * 0.15;
}