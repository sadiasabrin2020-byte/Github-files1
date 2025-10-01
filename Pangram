#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = c - 'A' + 'a';
        }


        if (c >= 'a' && c <= 'z')
        {
            int index = c - 'a';
            if (!seen[index])
            {
                seen[index] = true;
                count++;
            }
        }
    }

    if (count == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

