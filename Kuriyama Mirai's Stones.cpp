#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n + 1), prefix1(n + 1), prefix2(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];


    for (int i = 1; i <= n; i++)
        prefix1[i] = prefix1[i - 1] + v[i];


    vector<long long> sorted_v(v.begin() + 1, v.end());
    sort(sorted_v.begin(), sorted_v.end());


    for (int i = 1; i <= n; i++)
        prefix2[i] = prefix2[i - 1] + sorted_v[i - 1];

    int m;
    cin >> m;

    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << prefix1[r] - prefix1[l - 1] << "\n";
        else
            cout << prefix2[r] - prefix2[l - 1] << "\n";
    }

    return 0;
}

