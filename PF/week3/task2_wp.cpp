#include <iostream>
using namespace std;
void sum();

int main()
{
    sum();
}

void sum()
{
    int val1, val2;
    cout << "Enter First Number: ";
    cin >> val1;
    cout << "Enter Second Number: ";
    cin >> val2;
    cout << val1 + val2 << endl;
}