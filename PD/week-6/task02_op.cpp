#include <iostream>
using namespace std;
void upperTriangle(int number){
for (int i = number; i > 0; i--)
    {
        for (int j = 0; j < number; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
void lowerTriangle(int number){
     for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int number = 10;
    upperTriangle(number);
    lowerTriangle(number);
   
    return 0;
}
