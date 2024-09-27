#include <iostream>
using namespace std;
void pet(int);

int main()
{
    int holidays;
    cout << "Holidays: ";
    cin >> holidays;
    pet(holidays);
}

void pet(int holidays)
{
    int workingDays = 365 - holidays;
    int timeForGames = workingDays * 63 + holidays * 127;
    if (timeForGames > 30000)
    {
        int timeDiff = (timeForGames - 30000);
        int hours = timeDiff / 60;
        int minutes = timeDiff % 60;

        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }
    else if (timeForGames < 30000)
    {
        int timeDiff = 30000 - timeForGames;
        int hours = timeDiff / 60;
        int minutes = timeDiff % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }
}