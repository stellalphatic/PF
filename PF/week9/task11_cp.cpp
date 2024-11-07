#include <iostream>
#include <conio.h>
using namespace std;
string removeVowel(string str)
{
    string newStr = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'I' && str[i] != 'A' && str[i] != 'E' && str[i] != 'U')
        {
            newStr += str[i];
        }
    }
    return newStr;
}
int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "String with vowels removed: " << removeVowel(sentence) << endl;
    return 0;
}