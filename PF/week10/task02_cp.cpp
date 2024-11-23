#include <iostream>
#include <string>
using namespace std;
int findLetter(string arr[], int size, char letter)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int itr = 0;
        while (arr[i][itr] != '\0')
        {
            if (arr[i][itr] == letter)
                count++;
            itr++;
        }
    }
    return count;
}
int main()
{
    int size;
    cout << "Enter how many words you want to Enter: ";
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> arr[i];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;

    cout << letter << " shows up " << findLetter(arr, size, letter) << " times in the data." << endl;

    return 0;
}