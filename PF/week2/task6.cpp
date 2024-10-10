#include <iostream>
using namespace std;
int main()
{
    int megaBytes;
    cout << "Enter the size in MegaBytes (MB): ";
    cin >> megaBytes;

    cout << megaBytes << " MB is equivalent to " << megaBytes * 8 * 1024 << " bits";
}