#include <iostream>
using namespace std;
float calculateAverage(float english, float maths, float chemistry, float social, float biology)
{
    return (english + maths + chemistry + social + biology) / 5;
}
string calculateGrade(float average)
{
    if (average >= 90)
        return "A+";
    if (average >= 80)
        return "A";
    if (average >= 70)
        return "B+";
    if (average >= 60)
        return "B";
    if (average >= 50)
        return "C";
    if (average >= 40)
        return "D";
    return "F";
}

int main()
{
    string name;
    float english, maths, chemistry, social, biology;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for english: ";
    cin >> english;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Social Science: ";
    cin >> social;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    float average = calculateAverage(english, maths, chemistry, social, biology);

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << calculateGrade(average) << endl;

    return 0;
}