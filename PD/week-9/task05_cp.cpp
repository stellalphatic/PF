#include <iostream>
using namespace std;
bool areSame(string array[], int size)
{
    string first = array[0];
    for (int i = 1; i < size; i++)
    {
        if (first != array[i])
            return 0;
    }
    return true;
}
int main()
{
    string arr[4] = {"@", "@", "@", "@"};
    if (areSame(arr, 4))
        cout << "True";
    else
        cout << "False";
    return 0;
}