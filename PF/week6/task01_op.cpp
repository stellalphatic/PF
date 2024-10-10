#include <iostream>
using namespace std;
bool isGreater(int first, int second)
{
    if (first > second)
        return 1;
    return 0;
}
int main()
{
    int first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the first number: ";
    cin >> second;
    cout << isGreater(first, second);

    return 0;
}