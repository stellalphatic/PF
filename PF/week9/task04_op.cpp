#include <iostream>
using namespace std;
void printReverseArray(int arr[], int number)
{
    for (int i = number - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    cout << "Number in reverse order: ";
    printReverseArray(arr, size);
    return 0;
}