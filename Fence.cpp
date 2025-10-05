#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }


    int window_sum = 0;
    for (int i = 0; i < k; ++i)
    {
        window_sum += h[i];
    }

    int min_sum = window_sum;
    int min_index = 0;


    for (int i = 1; i <= n - k; ++i)
    {
        window_sum = window_sum - h[i - 1] + h[i + k - 1];

        if (window_sum < min_sum)
        {
            min_sum = window_sum;
            min_index = i;
        }
    }


    cout << (min_index + 1) << endl;

    return 0;
}
