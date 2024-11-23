#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int myLength(string str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
string reverseW(string word)
{
    int size = myLength(word);
    string ans = "";
    for (int i = size - 1; i >= 0; i--)
    {
        ans += word[i];
    }
    return ans;
}
string reverseWords(string str)
{
    int size = myLength(str);
    string ans = "";
    string reverseStr = "";
    for (int i = size - 1; i >= 0; i--)
    {
        reverseStr += str[i];
    }
    int i = 0;
    while (i < size)
    {
        string word = "";
        while (reverseStr[i] != ' ' && i < size)
        {
            word += reverseStr[i];
            i++;
        }
        ans += reverseW(word);
        while (reverseStr[i] == ' ')
        {
            ans += ' ';
            i++;
        }
    }
    return ans;
}
int main()
{
    string str;
    cout << reverseWords(" string: the Enter");
    getline(cin, str);
    cout << reverseWords(str) << endl;

    return 0;
}