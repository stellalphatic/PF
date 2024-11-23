#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int boxes;
    cout << "Enter number of elements of boxes: ";
    cin >> boxes;
    int arr[boxes];
    for (int i = 0; i < boxes; i += 3)

        cout << "Enter length: ";
    cin >> arr[i];
    cout << "Enter width: ";
    cin >> arr[i + 1];
    cout << "Enter height: ";
    cin >> arr[i + 2];
}
int ans[boxes];
int itr = 0;
for (int i = 0; i < boxes; i += 3)
{
    ans[itr] = arr[i++] * arr[i++] * arr[i];
    itr++;
}
int volume = 0;
cout << "volume: ";
for (int i = 0; i < boxes; i++)
{
    volume += arr[i];
}
cout << volume << endl;

return 0;
}