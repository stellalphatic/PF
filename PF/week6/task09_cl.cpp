#include <iostream>
using namespace std;
string checkTitle(int age, char gender)
{
    if (gender == 'm')
    {
        if (age >= 16)
            return "Mr.";
        return "Master";
    }
    if (gender == 'f')
    {
        if (age >= 16)
            return "Ms.";
        return "Miss";
    }
}
int main()
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender(m/f): ";
    cin >> gender;
    cout << checkTitle(age, gender);

    return 0;
}