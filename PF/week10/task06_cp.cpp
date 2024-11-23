#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void mySort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    const int size = 10;
    int arr[size] = {3, 5, 90, 57, 1, 5, 3, 7, 8, 19};
    mySort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}