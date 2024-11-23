#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "How many Elements you want to Enter: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    const int n = 50;
    int ans[n];
    int itr = 0;
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            ans[itr] = arr[i];
            itr++;
        }
    }
    if (itr == 0)
    {
        cout << "No peak element Found." << endl;
        return 0;
    }
    for (int i = 0; i < itr; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}