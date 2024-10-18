#include <iostream>
using namespace std;
void amplify(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
            cout << i * 10;
        else
            cout << i;
        if (i != number)
            cout << ",";
    }
}
int main()
{
    int number;
    cout << "Enter a number to Amplify:";
    cin >> number;
    amplify(number);
    return 0;
}