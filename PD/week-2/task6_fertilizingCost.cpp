#include <iostream>
using namespace std;
int main()
{
    int size, costPerBag, area;
    cout << "Enter the size of fertilizer bag in pounds: ";
    cin >> size;
    cout << "Enter the cost of the bag: $";
    cin >> costPerBag;
    cout << "Enter the in sq. feet that can be covered by bag: ";
    cin >> area;
    int costPerPound = costPerBag / size;

    cout << "Cost of fertilizer per pound: $" << costPerPound << endl;
    cout << "Cost of fertilizing per square feet: $" << costPerBag / area << endl;
}