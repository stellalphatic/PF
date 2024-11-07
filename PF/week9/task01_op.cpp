#include <iostream>
using namespace std;
void characters(string word)
{

    for (int i = 0; i < word.length(); i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }
}
int main()
{
    string word;
    cin >> word;
    characters(word);
    cout << "Enter a word: ";

    return 0;
}