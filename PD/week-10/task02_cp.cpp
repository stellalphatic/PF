#include <iostream>
#include <string>
using namespace std;
int rotations(string arr[], int size)
{
    int rotations = 0;
    int right = 0, left = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == "right" && left == 0)
        {
            right++;
        }
        else if (arr[i] == "left" && right == 0)
        {
            left++;
        }
        if (arr[i] == "right")
        {
            left--;
        }
        else if (arr[i] == "left")
        {
            right--;
        }
        if (left < 0)
            left = 0;
        if (right < 0)
            right = 0;
        if (right == 4 || left == 4)
        {
            rotations++;
            right = 0;
            left = 0;
        }
    }
    return rotations;
}
int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    string arr[size];
    cout << "Enter directions(left,right only): " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << rotations(arr, size) << endl;
    return 0;
}