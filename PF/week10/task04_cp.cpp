#include <iostream>
#include <conio.h>
using namespace std;
const int maxSize = 100;
int arr[maxSize];
int siz;

bool isRepeatingCycle(int n)
{
    if (n >= siz)
        return true;
    int st = 0;

    for (int i = n; i < siz; i++)
    {
        int j = 0;
        bool isRepeating = true;
        while (j < n)
        {
            if (arr[st + j] != arr[i + j])
            {
                isRepeating = false;
                break;
            }
            j++;
        }
        if (isRepeating)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    siz = n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cycle;
    cout << "Enter cycle length: ";
    cin >> cycle;
    cout << isRepeatingCycle(cycle) << endl;
    return 0;
}