#include <iostream>
using namespace std;
void passOrFail(int);

int main()
{
    int score;
    cout << "Enter your Score: ";
    cin >> score;
    passOrFail(score);
}

void passOrFail(int score)
{
    if (score > 50)
        cout << "Pass";
    else
        cout << "Fail";
}