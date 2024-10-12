#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int stays)
{
    float studio, apartment;
    if (month == "may" || month == "october")
    {
        studio = 50.0;
        apartment = 65.0;
        if (stays > 14)
        {
            studio *= 0.7;
        }
        else if (stays > 7)
        {
            studio *= 0.95;
        }
    }
    else if (month == "june" || month == "september")
    {
        studio = 75.20;
        apartment = 68.70;
        if (stays > 14)
        {
            studio *= 0.8;
        }
    }
    else if (month == "july" || month == "august")
    {
        studio = 76.0;
        apartment = 77.0;
    }

    apartment = apartment * stays;
    if (stays > 14)
        apartment *= 0.9;
    studio *= stays;
    cout << "Apartment: " << apartment << "$." << endl;
    cout << "Studio: " << studio << "$." << endl;

    return "";
}
int main()
{
    int stays;
    string month;
    cout << "Enter the month(may,june,july,august,september,october): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;

    calculateHotelPrices(month, stays);

    return 0;
}