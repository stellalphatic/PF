#include <iostream>
#include <windows.h>
void gotoxy(int, int);
void maze();
void moveplayer(int, int);

using namespace std;
int main()
{
    int x_Axis = 2, y_Axis = 5;
    system("cls");
    maze();
    while (true)
    {
        moveplayer(x_Axis, y_Axis);
        x_Axis = x_Axis + 1;
        if (x_Axis == 38)
        {
            x_Axis = 2;
        }
    }
}

void gotoxy(int x_Axis, int y_Axis)
{
    COORD coordinates;
    coordinates.X = x_Axis;
    coordinates.Y = y_Axis;
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

void moveplayer(int x_axis, int y_axis)
{
    gotoxy(x_axis, y_axis);
    cout << "P";
    Sleep(200);
    gotoxy(x_axis, y_axis);
    cout << " ";
}