#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (number == arr[i])
            return true;
    }
    return false;
}
int main()
{
    int size, number;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> number;
        if (isAlreadyEntered(arr, i, number))
        {
            cout << "Already entered: " << number << endl;
        }
        else
        {
            arr[i] = number;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i])
            cout << arr[i] << " ";
    }

    return 0;
}