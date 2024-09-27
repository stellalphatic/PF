#include <iostream>
#include <windows.h>
void gotoxy(int, int);
using namespace std;
int main()
{
    system("cls");
    cout << "hello, world!";
    gotoxy(15, 10);
    Sleep(1000);
}

void gotoxy(int xAxis, int yAxis)
{
    COORD coordinates;
    coordinates.X = xAxis;
    coordinates.Y = yAxis;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}