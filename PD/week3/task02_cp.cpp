#include <iostream>
using namespace std;
void reverse(string);
int main()
{
    string value;
    cout << "Enter \'true\' or \'false\' : ";
    cin >> value;
    reverse(value);
}

void reverse(string value)
{
    if (value == "true")
        cout << "false" << endl;
    else if (value == "false")
        cout << "true" << endl;
}