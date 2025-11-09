#include <iostream>
#include <string>
using namespace std;

void rabinKarp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    int found = 0;

    for (int i = 0; i <= n - m; i++)
    {
        string sub = text.substr(i, m);
        if (sub == pattern)
        {
            cout << "Pattern found at index " << i << endl;
            found = 1;
        }
    }

    if (!found)
        cout << "Pattern not found." << endl;
}

int main()
{
    string text = "aabcabcab";
    string pattern = "abc";
    rabinKarp(text, pattern);
    return 0;
}

