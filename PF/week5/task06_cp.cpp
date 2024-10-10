#include <iostream>
void checkAlphabetCase(char);
using namespace std;
int main()
{
    char character;
    cout << "Enter a character(a/A): ";
    cin >> character;
    checkAlphabetCase(character);
}

void checkAlphabetCase(char character)
{
    if (character == 'A')
        cout << "You have entered a capital A" << endl;
    else if (character == 'a')
        cout << "You have entered a small a" << endl;
}