#include <iostream>
using namespace std;
string checkPointPosition(int height, int xCoord, int yCoord)
{
    int upperX = 2 * height;
    int upperY = 4 * height;
    if (xCoord == 0)
    {
        if (yCoord <= 2)
            return "Border";
        return "Outside";
    }
    if (xCoord < upperX - 2)
    {
        if (yCoord == 2 || yCoord == 0)
            return "Border";
        if (yCoord < 2 && yCoord > 0)
            return "Inside";
        return "Outside";
    }
    if (xCoord == upperX - 2 || xCoord == upperX)
    {
        if (yCoord <= upperY)
            return "Border";
        return "Outside";
    }
    if (xCoord > upperX - 2 && xCoord < upperX)
    {
        if ((!(yCoord & 1) && yCoord <= upperY) || yCoord == 0)
            return "Border";
        if (yCoord < upperY && yCoord > 0)
            return "Inside";
        return "Outside";
    }
    if (xCoord > upperX && xCoord < (2 * upperX))
    {
        if (yCoord == 2 || yCoord == 0)
            return "Border";
        if (yCoord < 2 && yCoord > 0)
            return "Inside";
        return "Outside";
    }
    return "Outside";
}
int main()
{
    int height, xCoord, yCoord;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xCoord;
    cout << "Enter y coordinate: ";
    cin >> yCoord;
    cout << checkPointPosition(height, xCoord, yCoord);

    return 0;
}