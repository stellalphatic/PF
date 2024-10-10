#include <iostream>
using namespace std;
int main()
{
    string name;
    char section;
    int rollno;
    float aggregate;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your roll number:";
    cin >> rollno;
    cout << "Enter your aggregate:";
    cin >> aggregate;
    cout << "Enter your section:";
    cin >> section;

    cout << "Student Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Aggregate: " << aggregate << endl;
    cout << "Section: " << section << endl;
}