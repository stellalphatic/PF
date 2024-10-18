#include <iostream>
using namespace std;
int main()
{
    int days, patients, treatedPatients = 0, untreatedPatients = 0;
    int doctors = 7;
    cout << "Enter number of days you visited Hospital: ";
    cin >> days;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;
        if (patients >= doctors)
        {
            treatedPatients += doctors;
            untreatedPatients += patients - doctors;
        }
        else
        {
            treatedPatients += patients;
        }

        if (i % 2 == 0 && untreatedPatients > treatedPatients)
            doctors++;
    }
    cout << "Treated Patients: " << treatedPatients << endl;
    cout << "Untreated Patients: " << untreatedPatients << endl;
    return 0;
}