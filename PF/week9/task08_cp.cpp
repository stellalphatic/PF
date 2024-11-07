#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArr[], int firstSize, int secondArr[], int secondSize)
{
    int newArr[secondSize + firstSize];
    newArr[0] = firstArr[0];
    newArr[secondSize + firstSize - 1] = firstArr[firstSize - 1];

    for (int i = 0; i < secondSize; i++)
    {
        newArr[i + 1] = secondArr[i];
    }

    cout << "Resulting Array: [";
    for (int i = 0; i < secondSize + firstSize; i++)
    {
        if (i == secondSize + firstSize - 1)
        {
            cout << newArr[i] << "]";
            break;
        }
        cout << newArr[i] << ", ";
    }
}
int main()
{
    int firstArr[2];
    cout << "Enter 2 elements for the first array, one per line: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> firstArr[i];
    }
    int secondSize;
    cout << "Enter the number of elements of second array: ";
    cin >> secondSize;
    int secondArr[secondSize];
    cout << "Enter 2 elements for the first array, one per line: " << endl;
    for (int i = 0; i < secondSize; i++)
    {
        cin >> secondArr[i];
    }
    insertArrayInMiddle(firstArr, 2, secondArr, secondSize);
    return 0;
}