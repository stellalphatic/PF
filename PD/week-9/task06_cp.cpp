#include <iostream>
using namespace std;
void transform(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2)
            arr[i] += (number * 2);
        else
            arr[i] -= (number * 2);
    }
}
int main()
{
    int size, number;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> number;
    transform(arr, size, number);
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;

    return 0;
}