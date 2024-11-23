#include <iostream>
using namespace std;
void mySort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
    }
}
bool isConsecutive(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] - 1 != arr[i - 1])
            return false;
    }
    return true;
}
int main()
{
    int size;
    cout << "Enter length: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mySort(arr, size);
    cout << isConsecutive(arr, size) << endl;
    return 0;
}
