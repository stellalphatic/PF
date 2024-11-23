#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter number of saturdays: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
            count++;
    }
    cout << count << endl;
    return 0;
}