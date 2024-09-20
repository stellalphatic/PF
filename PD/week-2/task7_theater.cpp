#include <iostream>
using namespace std;
int main()
{
    string name;
    int adultTicket, childTicket, childSold, adultSold, charity;
    cout << "Enter movie name: ";
    cin >> name;
    cout << "Enter adult ticket price: $";
    cin >> adultTicket;
    cout << "Enter child ticket price: $";
    cin >> childTicket;
    cout << "Enter number of adult tickets sold: ";
    cin >> adultSold;
    cout << "Enter number of child tickets sold: ";
    cin >> childSold;
    cout << "Enter percentage of amount to be donated to charity: ";
    cin >> charity;
    int total = adultSold * adultTicket + childSold * childTicket;
    int donation = (charity / 100.0) * total;
    cout << "Movie: " << name << endl;
    cout << "Total amount generated from ticket sales: $" << total << endl;
    cout << "Donation to charity (" << charity << "%): $" << donation << endl;
    cout << "Remaining amount after donation: $" << total - donation << endl;
}