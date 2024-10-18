#include <iostream>
using namespace std;
void upperTriangle(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
void lowerTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int rows = 10;
    upperTriangle(rows);
    lowerTriangle(rows);

    return 0;
}