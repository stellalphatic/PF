#include <iostream>
using namespace std;
int strLength(string str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return index;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int length = strLength(str);
    if (length % 2)
        cout << "False";
    else
        cout << "True";

    return 0;
}