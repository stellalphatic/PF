#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
    string sentence;
    cout << "Enter argument 'a' :";
    getline(cin, sentence);
    cout << "Result: Something " << sentence << endl;
    return 0;
}