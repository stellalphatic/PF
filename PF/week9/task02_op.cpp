#include <iostream>
using namespace std;
string reverseString(string word)
{
    int start = 0, end = word.length() - 1;
    while (start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
    return word;
}
int main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    cout << reverseString(word);
    return 0;
}