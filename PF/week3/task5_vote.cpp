#include <iostream>
using namespace std;
void vote(int);

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    vote(age);
}

void vote(int age)
{
    if (age >= 18)
        cout << "You are eligible to Vote";
    else
        cout << "You are not Eligible to Vote";
}