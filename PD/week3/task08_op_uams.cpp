#include <iostream>
using namespace std;
void printmenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

int main()
{
    string name;
    int matric, inter, ecat;
    int selection = 0;

    while (selection < 3)
    {
        printmenu();
        cout << "What operation you want to perform?" << endl;
        cout << "Press 1 to Calculate Aggregate" << endl;
        cout << "Press 2 to compare Marks" << endl;
        cout << "Press 3 or greater to Exit" << endl;
        cin >> selection;
        if (selection == 1)
        {

            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your Matric Marks(out of 1100): ";
            cin >> matric;
            cout << "Enter your Inter marks(out of 550): ";
            cin >> inter;
            cout << "Enter your ECAT marks(out of 400): ";
            cin >> ecat;
            calculateAggregate(name, matric, inter, ecat);
        }
        if (selection == 2)
        {
            string std1Name, std2Name;
            int std1Marks, std2Marks;
            cout << "Enter student1 name: ";
            cin >> std1Name;
            cout << "Enter " << std1Name << "\'s Ecat Marks: ";
            cin >> std1Marks;
            cout << "Enter student2 name: ";
            cin >> std2Name;
            cout << "Enter " << std2Name << "\'s Ecat Marks: ";
            cin >> std2Marks;
            compareMarks(std1Name, std1Marks, std2Name, std2Marks);
        }
    }
}

void printmenu()
{
    cout << endl;
    cout << " #    # #### #####" << endl;
    cout << " #    # #      #" << endl;
    cout << " #    # ####   #" << endl;
    cout << " #    # #      #" << endl;
    cout << "  ####  ####   #" << endl
         << endl;
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{
    cout << "Your Aggregate is: " << 0.3 * ((matricMarks / 1100.0) * 100) + 0.3 * ((interMarks / 550.0) * 100) + 0.4 * ((ecatMarks / 400.0) * 100) << endl;
}
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
    if (ecatMarksStd1 > ecatMarksStd2)
    {
        cout << "******" << nameStd1 << "\'s marks are Maximum******" << endl;
    }
    else
    {
        cout << "******" << nameStd2 << "\'s marks are Maximum*******" << endl;
    }
}