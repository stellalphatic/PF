#include <iostream>
using namespace std;
int commonCharaters(string str1, string str2)
{
    int index1 = 0, count = 0;
    while (str1[index1] != '\0')
    {
        int index2 = 0;
        while (str2[index2] != '\0')
        {

            if (str1[index1] == str2[index2])
            {
                str2[index2] = ' ';
                count++;
                break;
            }
            index2++;
        }
        index1++;
    }

    return count;
    ;
}
int main()
{
    // string str1 = "aabcc", str2 = "adcaa";
    string str1, str2;
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    cout << commonCharaters(str1, str2);
    return 0;
}