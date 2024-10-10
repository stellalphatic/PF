#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns)
{
    if (type == "premiere")
        return 12.00 * rows * columns;
    if (type == "normal")
        return 7.50 * rows * columns;
    if (type == "discount")
        return 5.00 * rows * columns;
}
int main()
{
    string type;
    int rows, columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    cout << "Enter the no. of columns: ";
    cin >> columns;
    cout << totalIncome(type, rows, columns);
    return 0;
}