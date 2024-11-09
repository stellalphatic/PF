#include <iostream>
using namespace std;
bool isSeven(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 10 == 7)
            return true;
    }
    return false;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (isSeven(arr, size))
        cout << "Boom!" << endl;
    else
        cout << "there is no 7 in the array";
    return 0;
}