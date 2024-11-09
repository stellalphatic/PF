#include <iostream>
using namespace std;
int calculateTime(string colors[], int size)
{

    int time = 2;
    for (int i = 1; i < size; i++)
    {
        if (colors[i] == colors[i - 1])
        {
            time += 2;
        }
        else
            time += 3;
    }
    return time;
}
int main()
{
    int size;
    cout << "Enter number number of colors: ";
    cin >> size;
    string colors[size];
    for (int i = 0; i < size; i++)
    {
        cin >> colors[i];
    }
    cout << calculateTime(colors, size);

    return 0;
}