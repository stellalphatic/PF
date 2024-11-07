#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size)
{
    int maxi = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
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
    cout << "The largest number entered is: " << findLargestNumber(arr, size) << endl;
    return 0;
}