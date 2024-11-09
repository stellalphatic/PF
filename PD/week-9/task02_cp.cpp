#include <iostream>
using namespace std;
int main()
{
    float ticketPrice = 500;
    string movieName;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter movie name: ";
    cin >> movieName;
    int index = 0;
    while (movies[index] != movieName && index < 5)
    {
        index++;
    }
    if (index > 4)
        cout << "Movie not available" << endl;
    else if (index % 2)
        cout << "Dicounted ticket Price: " << ticketPrice - (ticketPrice * 0.05);
    else
        cout << "Dicounted ticket Price: " << ticketPrice - (ticketPrice * 0.1);
    return 0;
}