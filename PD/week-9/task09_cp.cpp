#include <iostream>
using namespace std;
void danceMoves(string pin)
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step",
                        "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i] - '0';
        int moveIndex = (digit + i) % 10;
        cout << moves[moveIndex];

        if (i < 3)
            cout << ", ";
    }
    cout << endl;
}
int main()
{
    string pin;

    cout << "Enter Pin: ";
    cin >> pin;
    int index = 0;
    bool isValid = 1;
    while (pin[index] != '\0')
    {
        if (!((pin[index] == '0') || (pin[index] == '1') || (pin[index] == '2') || (pin[index] == '3') || (pin[index] == '4') || (pin[index] == '5') || (pin[index] == '6') || (pin[index] == '7') || (pin[index] == '8') || (pin[index] == '9')))
            isValid = 0;
        index++;
    }

    if ((isValid == 0) || (index != 4))
        cout << "Invalid input." << endl;
    else
        danceMoves(pin);

    return 0;
}