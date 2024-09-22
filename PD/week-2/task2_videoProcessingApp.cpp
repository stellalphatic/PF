#include <iostream>
using namespace std;
int main()
{
    int minutes, framesPerSec;
    cout << "Number of Minutes: ";
    cin >> minutes;
    cout << "Frames per Second: ";
    cin >> framesPerSec;

    cout << "Total number of Frames: " << framesPerSec * minutes * 60;
}