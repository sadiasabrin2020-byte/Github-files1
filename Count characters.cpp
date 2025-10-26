#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int countUpper[26] = {0};
    int countLower[26] = {0};
    for(int i=0; i<s.size(); i++)
    {
        char c=s[i];
        if (c >= 'A' && c <= 'Z')
        {
            countUpper[c - 'A']++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            countLower[c - 'a']++;
        }

    }
    for (int i = 0; i < 26; i++)
    {
        if (countUpper[i] > 0)
        {
            cout << char('A' + i) << " " << countUpper[i] << endl;
        }
    }


    for (int i = 0; i < 26; i++)
    {
        if (countLower[i] > 0)
        {
            cout << char('a' + i) << " " << countLower[i] << endl;
        }
    }

    return 0;

}
