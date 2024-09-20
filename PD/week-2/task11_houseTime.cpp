#include <iostream>
using namespace std;
int main()
{
    int age, moved;
    cout << "Enter the person's age: ";
    cin >> age;
    cout << "Enter the no. of times they've moved: ";
    cin >> moved;

    cout << "Average number of years lived in the same house: " << age / (moved + 1);
}