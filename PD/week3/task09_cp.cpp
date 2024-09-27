#include <iostream>
using namespace std;
void tpChecker(int, int);

int main()
{
    int people, rolls;
    cout << "Number of People in the household: ";
    cin >> people;
    cout << "Number of rolls of TP: ";
    cin >> rolls;
    tpChecker(people, rolls);
}

void tpChecker(int people, int tp)
{
    float tpUsePerDay = (people * 57) / 500.0;
    int days = tp / tpUsePerDay;
    if (days < 14)
        cout << "Your TP will only last " << days << " days,buy more!" << endl;
    else
        cout << "Your TP will last " << days << " days, no need to panic!" << endl;
}