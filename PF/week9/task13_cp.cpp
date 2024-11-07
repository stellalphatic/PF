#include <iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords)
{
    for (int i = 0; i < numChords; i++)
    {
        char j = chords[i].length() - 1;
        string str = chords[i];
        if (str[j] != '7')
            chords[i] += '7';
    }
    cout << "Jazzified Chords: [";
    for (int i = 0; i < numChords; i++)
    {
        if (i == numChords - 1)
        {
            cout << chords[i] << " ]";
            break;
        }
        cout << chords[i] << " ,";
    }
}
int main()
{
    int size;
    cout << "Enter the number of Chords: ";
    cin >> size;
    string arr[size];
    cout << "Enter " << size << " Chords, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    jazzifyChords(arr, size);
    return 0;
}