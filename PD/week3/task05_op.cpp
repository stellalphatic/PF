#include <iostream>
#include <windows.h>
void gotoxy(int, int);
void maze();

using namespace std;
int main()
{
    system("cls");
    gotoxy(40, 14);
    cout << "   #### #   #   #   #   # #####    #  #####  #####  " << endl;
    gotoxy(40, 15);
    cout << "  #   # #   #  # #  #   #    #    # #   #    #  #   " << endl;
    gotoxy(40, 16);
    cout << "  ####  #####  ###  #####   #    ####   #    ###   " << endl;
    gotoxy(40, 17);
    cout << "#    #  #   # #   # #   #  #     #  #   #    #  #  " << endl;
    gotoxy(40, 18);
    cout << " ####   #   # #   # #   # ###### #  # #####  #####  " << endl;
    Sleep(500);
    gotoxy(2, 30);
}

void gotoxy(int x_axis, int y_axis)
{
    COORD coordinates;
    coordinates.X = x_axis;
    coordinates.Y = y_axis;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
