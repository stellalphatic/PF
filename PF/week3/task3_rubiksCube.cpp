#include <iostream>
using namespace std;
void howManyStickers(int);

int main()
{
    int length;
    cout << "Number of Side length of Rubik's Cube: ";
    cin >> length;
    howManyStickers(length);
}

void howManyStickers(int length)
{
    cout << "Number of stickers: " << length * length * 6 << endl;
}