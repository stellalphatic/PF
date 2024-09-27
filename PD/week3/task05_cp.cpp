#include <iostream>
using namespace std;
void possibleBonus(int, int);

int main()
{
    int positionA, positionB;
    cout << "Enter your Position: ";
    cin >> positionA;
    cout << "Enter your friend's Position: ";
    cin >> positionB;
    possibleBonus(positionA, positionB);
}
void possibleBonus(int positionA, int positionB)
{
    if ((positionB - positionA) <= 6)
        cout << "true";
    else
        cout << "false";
}