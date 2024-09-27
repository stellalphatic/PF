#include <iostream>
using namespace std;
void printH();
void printA();
void printS();
void printN();
int main()
{
    printH();
    printA();
    printS();
    printS();
    printA();
    printN();
}

void printH()
{
    cout << "#   #" << endl;
    cout << "#   #" << endl;
    cout << "##### " << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl
         << endl;
}
void printA()
{
    cout << "  #" << endl;
    cout << " # #" << endl;
    cout << "##### " << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl
         << endl;
}
void printS()
{
    cout << " ####" << endl;
    cout << "#    " << endl;
    cout << " #### " << endl;
    cout << "#    #" << endl;
    cout << " ####" << endl
         << endl;
}
void printN()
{
    cout << "##   #" << endl;
    cout << "# #  #" << endl;
    cout << "#  # # " << endl;
    cout << "#   ##" << endl;
    cout << "#    #" << endl
         << endl;
}