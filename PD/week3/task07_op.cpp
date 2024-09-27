#include <iostream>
#include <windows.h>
void gotoxy(int, int);
void maze();
void moveplayer(int, int);

using namespace std;
int main()
{
    int x_Axis = 10, y_Axis = 2;
    system("cls");
    maze();
    while (true)
    {
        moveplayer(x_Axis, y_Axis);
        y_Axis = y_Axis + 1;
        if (y_Axis == 15)
        {
            y_Axis -= 1;
            while (y_Axis > 1)
            {
                moveplayer(x_Axis, y_Axis);
                y_Axis -= 1;
            }
        }
    }
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
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "#                                     # " << endl;
    cout << "####################################### " << endl;
}

void moveplayer(int xAxis, int yAxis)
{
    gotoxy(xAxis, yAxis);
    cout << "Patrol";
    Sleep(200);
    gotoxy(xAxis, yAxis);
    cout << "      ";
}