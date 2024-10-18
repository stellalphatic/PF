#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int count;
    float tonnage, minibus = 0, truck = 0, train = 0, total = 0, avgPrice = 0;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
        if (tonnage <= 3)
        {
            minibus += tonnage;
        }
        else if (tonnage <= 11)
        {
            truck += tonnage;
        }
        else
        {
            train += tonnage;
        }
        total += tonnage;
    }
    avgPrice = (200 * minibus + 175 * truck + 120 * train) / total;
    cout << fixed;
    cout << setprecision(2);
    cout << avgPrice << endl;
    cout << minibus / total * 100 << "%" << endl;
    cout << truck / total * 100 << "%" << endl;
    cout << train / total * 100 << "%" << endl;
    return 0;
}