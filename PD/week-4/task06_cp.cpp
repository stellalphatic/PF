#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int playerHealth = 100;
int playerX = 2, playerY = 2;
int wallDamageCount = 0;
int enemy1X = 3, enemy1Y = 5;
int enemy2X = 8, enemy2Y = 12;
int enemy3X = 19, enemy3Y = 6;
bool enemy1DirectionRight = true;
bool enemy2DirectionRight = true;
bool enemy3DirectionDown = true;
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtPosition(int x, int y)
{
    char ch;
    COORD coord;
    coord.X = x;
    coord.Y = y;
    DWORD num_read;
    ReadConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), &ch, 1, coord, &num_read);
    return ch;
}
// player functions
void printPlayer()
{
    gotoxy(playerX, playerY);
    cout << 'P';
}
void erasePlayer()
{
    gotoxy(playerX, playerY);
    cout << " ";
}
void movePlayerLeft()
{
    char leftChar = getCharAtPosition(playerX - 1, playerY);
    if (leftChar == '0')
    {
        erasePlayer();
        playerX--;
        gotoxy(2, 12);
        cout << "    ";
    }
    if (leftChar != '#' && leftChar != '=' && leftChar != '|')
    {
        erasePlayer();
        playerX--;
    }
}
void movePlayerRight()
{
    char rightChar = getCharAtPosition(playerX + 1, playerY);
    if (rightChar != '#' && rightChar != '=' && rightChar != '|')
    {
        erasePlayer();
        playerX++;
    }
}
void movePlayerUp()
{
    char upChar = getCharAtPosition(playerX, playerY - 1);
    if (upChar != '#' && upChar != '=' && upChar != '-')
    {
        erasePlayer();
        playerY--;
    }
}
void movePlayerdown()
{
    char downChar = getCharAtPosition(playerX, playerY + 1);
    if (downChar != '#' && downChar != '=' && downChar != '-')
    {
        erasePlayer();
        playerY++;
    }
}
void shootUp()
{
    for (int i = 1; i <= 4; i++)
    {
        char ch = getCharAtPosition(playerX, playerY - i);
        if (ch == ' ')
        {
            gotoxy(playerX, playerY - i);
            cout << '|';
            Sleep(100);
            gotoxy(playerX, playerY - i);
            cout << ' ';
        }
        else
            break;
    }
}

void shootDown()
{
    for (int i = 1; i <= 4; i++)
    {
        char ch = getCharAtPosition(playerX, playerY + i);
        if (ch == ' ')
        {
            gotoxy(playerX, playerY + i);
            cout << '|';
            Sleep(100);
            gotoxy(playerX, playerY + i);
            cout << ' ';
        }
        else
            break;
    }
}

void shootLeft()
{
    for (int i = 1; i <= 4; i++)
    {
        char ch = getCharAtPosition(playerX - i, playerY);
        if (ch == ' ')
        {
            gotoxy(playerX - i, playerY);
            cout << '-';
            Sleep(100);
            gotoxy(playerX - i, playerY);
            cout << ' ';
        }
        else if (ch == '|')
        {
            wallDamageCount++;
            if (wallDamageCount > 5)
            {
                gotoxy(playerX - i, playerY);
                cout << " $ ";
                wallDamageCount = 0;
            }
        }
        else
            break;
    }
}

void shootRight()
{
    for (int i = 1; i <= 4; i++)
    {
        char ch = getCharAtPosition(playerX + i, playerY);
        if (ch == ' ')
        {
            gotoxy(playerX + i, playerY);
            cout << '-';
            Sleep(100);
            gotoxy(playerX + i, playerY);
            cout << ' ';
        }
        else if (ch == '|')
        {
            wallDamageCount++;
            if (wallDamageCount > 5)
            {
                gotoxy(playerX + i, playerY);
                cout << " $ ";
                wallDamageCount = 0;
            }
        }
        else
            break;
    }
}
void reducePlayerHealth()
{
    if (playerX >= enemy1X && playerX <= enemy1X + 3 && playerY == enemy1Y)
        playerHealth -= 10;
}

// enemy functions
void printEnemy1()
{
    gotoxy(enemy1X, enemy1Y);
    cout << "<-->";
}

void eraseEnemy1()
{
    gotoxy(enemy1X, enemy1Y);
    cout << "    ";
}

void moveEnemy1()
{
    eraseEnemy1();
    if (enemy1DirectionRight)
    {
        if (enemy1X < 11)
            enemy1X++;
        else
            enemy1DirectionRight = false;
    }
    else
    {
        if (enemy1X > 2)
            enemy1X--;
        else
            enemy1DirectionRight = true;
    }
    printEnemy1();
}
void printEnemy2()
{
    gotoxy(enemy2X, enemy2Y);
    cout << "<-->";
}

void eraseEnemy2()
{
    gotoxy(enemy2X, enemy2Y);
    cout << "    ";
}

void moveEnemy2()
{
    eraseEnemy2();
    if (enemy1DirectionRight)
    {
        if (enemy2X < 11)
            enemy2X++;
        else
            enemy2DirectionRight = false;
    }
    else
    {
        if (enemy2X > 2)
            enemy2X--;
        else
            enemy2DirectionRight = true;
    }
    printEnemy2();
}

void printMap()
{

    cout << "#######################################################################" << endl;
    cout << "##             ##|==0 $$$      ##                                   #" << endl;
    cout << "##           #########         ##                                   #" << endl;
    cout << "##            ######         $ ##                                   #" << endl;
    cout << "##  ######     ######       #####                                  #" << endl;
    cout << "##              #####       #####                                 #" << endl;
    cout << "####            ##             ##                                    #" << endl;
    cout << "####            ##             ##                                    #" << endl;
    cout << "##              ||             ##                                    #" << endl;
    cout << "##              ||             ##                                    #" << endl;
    cout << "##              ##             ##                                    #" << endl;
    cout << "##----###########################                              #" << endl;
    cout << "##             ||                                              #" << endl;
    cout << "##             ||                                              #" << endl;
    cout << "#######        ##                                              #" << endl;
    cout << "#######        ##       MAP UNDER CONSTRUCTION                       #" << endl;
    cout << "##             ##                                              #" << endl;
    cout << "##             ##                                              #" << endl;
    cout << "##  ?          ##                                              #" << endl;
    cout << "###################                                              #" << endl;
    cout << "#####################################################################" << endl;
}
void youLost()
{
    cout << " #     #  #####  #     #    #        #####   #####  ####### " << endl;
    cout << "  #   #  #     # #     #    #       #     # #     #    #    " << endl;
    cout << "   # #   #     # #     #    #       #     # #          #    " << endl;
    cout << "    #    #     # #     #    #       #     #  #####     #    " << endl;
    cout << "    #    #     # #     #    #       #     #       #    #    " << endl;
    cout << "    #    #     # #     #    #       #     # #     #    #    " << endl;
    cout << "    #     #####   #####     #######  #####   #####     #    " << endl;
}
void youWon()
{
    cout << " #     #  #####  #     #     #     #  #####   #     # " << endl;
    cout << "  #   #  #     # #     #     #  #  # #     #  ##    # " << endl;
    cout << "   # #   #     # #     #     #  #  # #     #  # #   # " << endl;
    cout << "    #    #     # #     #     #  #  # #     #  #  #  # " << endl;
    cout << "    #    #     # #     #     #  #  # #     #  #   # # " << endl;
    cout << "    #    #     # #     #     #  #  # #     #  #    ## " << endl;
    cout << "    #     #####   #####       ## ##   #####   #     # " << endl;
}
int main()
{
    system("CLS");
    printMap();
    printPlayer();
    printEnemy1();
    printEnemy2();

    while (true)
    {
        gotoxy(72, 0);
        cout << "Player Health: " << playerHealth;
        erasePlayer();
        eraseEnemy1;
        eraseEnemy2;
        if (GetAsyncKeyState(VK_LEFT))
            movePlayerLeft();
        else if (GetAsyncKeyState(VK_RIGHT))
            movePlayerRight();
        else if (GetAsyncKeyState(VK_UP))
            movePlayerUp();
        else if (GetAsyncKeyState(VK_DOWN))
            movePlayerdown();

        if (GetAsyncKeyState('W'))
            shootUp();
        else if (GetAsyncKeyState('S'))
            shootDown();
        else if (GetAsyncKeyState('A'))
            shootLeft();
        else if (GetAsyncKeyState('D'))
            shootRight();
        moveEnemy1();
        moveEnemy2();
        reducePlayerHealth();
        printPlayer();
        printEnemy1();
        printEnemy2();
        if (playerHealth == 0)
        {
            youLost();
            break;
        }
        if (playerX > 69)
        {
            youWon();
            break;
        }
        Sleep(100);
    }
    gotoxy(1, 30);
    getch();
    return 0;
}
