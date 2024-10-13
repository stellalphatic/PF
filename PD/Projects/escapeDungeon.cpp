#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int option;
int playerHealth = 100;
int score = 0;
int playerX = 2, playerY = 2;
int wallDamageCount = 0;
int enemy1X = 3, enemy1Y = 5;
int enemy2X = 8, enemy2Y = 12;
int enemy3X = 9, enemy3Y = 17;
bool enemy1DirectionRight = true;
bool enemy2DirectionRight = true;
bool enemy3DirectionDown = true;
int enemy3ShootCount = 0;
int enemy4X = 21, enemy4Y = 7;
bool enemy4MoveRight = true;
bool enemy4MoveDown = true;
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)

{

    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}
void startGame()
{
    int opt;
    cout << "#####  ####   #####    #    ####  #####   ####   ##   # ###   #  #####  #####  ####  ###   #" << endl;
    cout << "##    ##     ##      ## ##  ##  # ##      ##  #  ##   # ## #  # #       ##    #    # ## #  #" << endl;
    cout << "#####  ####  ##      #####  ####  #####   ##   # ##   # ##  # # #  #### ##### #    # ##  # #" << endl;
    cout << "##        ## ##      ## ##  ##    ##      ##  #  ##   # ##   ## #   # # ##    #    # ##   ##" << endl;
    cout << "#####  ####   #####  ## ##  ##    #####   ####    ####  ##   ##  #### # #####  ####  ##   ##" << endl
         << endl;
    cout << "Select Option:" << endl;
    cout << "Press 1. to start" << endl;
    cout << "Press 2. to exit" << endl;
    cin >> option;
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
    char leftChar = getCharAtxy(playerX - 1, playerY);
    if (leftChar == '?')
    {
        erasePlayer();
        playerX--;
        playerHealth += 20;
    }
    if (leftChar == '0')
    {
        erasePlayer();
        playerX--;
        gotoxy(2, 11);
        cout << "    ";
        score += 20;
    }
    if (leftChar == '$')
    {
        erasePlayer();
        playerX--;
        score += 10;
    }

    if (leftChar != '#' && leftChar != '=' && leftChar != '|')
    {
        erasePlayer();
        playerX--;
    }
}
void movePlayerRight()
{
    char rightChar = getCharAtxy(playerX + 1, playerY);
    if (rightChar == '?')
    {
        erasePlayer();
        playerX++;
        playerHealth += 20;
    }
    if (rightChar == '$')
    {
        erasePlayer();
        playerX++;
        score += 10;
    }
    if (rightChar != '#' && rightChar != '=' && rightChar != '|')
    {
        erasePlayer();
        playerX++;
    }
}
void movePlayerUp()
{
    char upChar = getCharAtxy(playerX, playerY - 1);
    if (upChar == '$')
    {
        erasePlayer();
        playerY--;
        score += 10;
    }
    if (upChar != '#' && upChar != '=' && upChar != '-')
    {
        erasePlayer();
        playerY--;
    }
}
void movePlayerdown()
{
    char downChar = getCharAtxy(playerX, playerY + 1);
    if (downChar == '?')
    {
        erasePlayer();
        playerY++;
        playerHealth += 20;
    }
    if (downChar == '$')
    {
        erasePlayer();
        playerY++;
        score += 10;
    }
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
        char ch = getCharAtxy(playerX, playerY - i);
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
        char ch = getCharAtxy(playerX, playerY + i);
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
        char ch = getCharAtxy(playerX - i, playerY);
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
        char ch = getCharAtxy(playerX + i, playerY);
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
    if (playerX >= enemy2X && playerX <= enemy2X + 3 && playerY == enemy2Y)
        playerHealth -= 10;
    if (playerX == enemy3X && playerY == enemy3Y)
        playerHealth -= 10;
    if (playerX == enemy4X && playerY == enemy4Y)
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

void bullet()
{
    gotoxy(enemy3X, enemy3Y);
    cout << '@';
}
void eraseBullet()
{
    gotoxy(enemy3X, enemy3Y);
    cout << " ";
}
void enemy3Shoot()
{
    // char ch = getCharAtxy(enemy3X, enemy3Y);
    // if (ch == 'P')
    //     playerHealth -= 10;
    eraseBullet();
    if (enemy3DirectionDown)
    {
        if (enemy3Y > 12)
            enemy3Y--;
        else
            enemy3Y = 18;
    }
}

void printEnemy4()
{
    gotoxy(enemy4X, enemy4Y);
    cout << "@";
}

void eraseEnemy4()
{
    gotoxy(enemy4X, enemy4Y);
    cout << " ";
}

void moveEnemy4()
{
    eraseEnemy4();

    if (enemy4MoveRight)
    {
        if (enemy4X < 30)
            enemy4X++;
        else
            enemy4MoveRight = false;
    }
    else
    {
        if (enemy4X > 19)
            enemy4X--;
        else
            enemy4MoveRight = true;
    }

    if (enemy4MoveDown)
    {
        if (enemy4Y < 10)
            enemy4Y++;
        else
            enemy4MoveDown = false;
    }
    else
    {
        if (enemy4Y > 6)
            enemy4Y--;
        else
            enemy4MoveDown = true;
    }

    printEnemy4();
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
    cout << "########       ##       MAP UNDER CONSTRUCTION                       #" << endl;
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
    startGame();

    if (option == 1)
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
            gotoxy(72, 1);
            cout << "SCORE: " << score;
            eraseBullet();
            erasePlayer();
            eraseEnemy1();
            eraseEnemy2();
            eraseEnemy4();

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
            moveEnemy4();
            reducePlayerHealth();

            if (enemy3ShootCount == 1)
            {
                enemy3Shoot();
                bullet();
                enemy3ShootCount = 0;
            }
            enemy3ShootCount++;

            printPlayer();
            printEnemy1();
            printEnemy2();
            printEnemy4();

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
    }
    return 0;
}
