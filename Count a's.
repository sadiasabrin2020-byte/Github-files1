#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    int n = s.length();


    vector<int> count_a(n + 1, 0);


    for (int i = 1; i <= n; ++i) {
        count_a[i] = count_a[i - 1];
        if (s[i - 1] == 'a') {
            count_a[i]++;
        }
    }


    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << count_a[R] - count_a[L - 1] << endl;
    }

    return 0;
}
