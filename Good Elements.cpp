#include <iostream>
using namespace std;

const int MAX = 1000000;

int main()
{
    int t;
    cin >> t;

    for (int test = 1; test <= t; test++)
    {
        int n;
        cin >> n;

        int a[n];
        int freq[MAX + 1] = {0};


        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int goodCount = 0;


        for (int i = 0; i < n; i++)
        {
            int num = a[i];

            bool isGood = false;


            if (freq[num] > 1)
            {
                isGood = true;
            }
            else
            {

                long long power = num;

                while (power <= MAX)
                {
                    if (power != num && freq[power] > 0)
                    {
                        isGood = true;
                        break;
                    }
                    power = power * num;


                    if (num == 1) break;
                }
            }

            if (isGood)
            {
                goodCount++;
            }
        }

        cout << "Case " << test << ": " << goodCount << endl;
    }

    return 0;
}
