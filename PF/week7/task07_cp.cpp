#include <iostream>
using namespace std;
float twoDecimal(float number)
{
    float value = (int)(number * 100);
    return (float)value / 100;
}
int main()
{
    int count;
    float percent1 = 0, percent2 = 0, percent3 = 0, percent4 = 0, percent5 = 0;
    cout << "Enter numbers Count: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        if (number < 200)
            percent1++;
        else if (number < 400)
            percent2++;
        else if (number < 600)
            percent3++;
        else if (number < 800)
            percent4++;
        else if (number > 800)
            percent5++;
    }
    cout << twoDecimal(percent1 / count * 100) << "%" << endl;
    cout << twoDecimal(percent2 / count * 100) << "%" << endl;
    cout << twoDecimal(percent3 / count * 100) << "%" << endl;
    cout << twoDecimal(percent4 / count * 100) << "%" << endl;
    cout << twoDecimal(percent5 / count * 100) << "%" << endl;
    return 0;
}