#include <iostream>
using namespace std;
string digitTotext(int);
int main()
{
    int number;
    cout << "Enter a number(1-99): ";
    cin >> number;
    cout << digitTotext(number) << endl;
}
string digitTotext(int number)
{
    string result = "";
    if (number >= 20)
    {
        if (number / 10 == 2)
            result += "twenty";
        if (number / 10 == 3)
            result += "thirty";
        if (number / 10 == 4)
            result += "fourty";
        if (number / 10 == 5)
            result += "fifty";
        if (number / 10 == 6)
            result += "sixty";
        if (number / 10 == 7)
            result += "seventy";
        if (number / 10 == 8)
            result += "eighty";
        if (number / 10 == 9)
            result += "ninety";
    }
    number = number % 10;
    if (number == 1)
        result += "One";
    else if (number == 2)
        result += "Two";
    else if (number == 3)
        result += "Three";
    else if (number == 4)
        result += "Four";
    else if (number == 5)
        result += "Five";
    else if (number == 6)
        result += "Six";
    else if (number == 7)
        result += "Seven";
    else if (number == 8)
        result += "Eight";
    else if (number == 9)
        result += "Nine";

    return result;
}