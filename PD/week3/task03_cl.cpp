#include <iostream>
#include <windows.h>
void gotoxy(int, int);
void maze();

using namespace std;
int main()
{
    system("cls");
    maze();
    gotoxy(10, 5);
    cout << "P";
    gotoxy(1, 13);
}

void gotoxy(int xAxis, int yAxis)
{
    COORD coordinates;
    coordinates.X = xAxis;
    coordinates.Y = yAxis;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void maze()
{
    cout << "####################################### " << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "####################################### " << endl;
}