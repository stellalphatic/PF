#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weekendsInYear = 48;
    int gamesInSofia = ((3.0 / 4.0) * weekendsInYear) + (2.0 / 3.0) * holidays - hometownWeekends;
    int gamesInHometown = hometownWeekends;
    int totalGames = gamesInHometown + gamesInSofia;

    if (yearType == "leap")
        return totalGames + 0.15 * (totalGames);

    if (yearType == "normal")
        return totalGames;
}
int main()
{
    string yearType;
    int holidays, weekends;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;
    cout << calculateVolleyballGames(yearType, holidays, weekends);

    return 0;
}