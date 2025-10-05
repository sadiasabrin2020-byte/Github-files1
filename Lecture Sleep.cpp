#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k ;

    vector<int> a(n), t(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> t[i];

    int baseTheorems = 0;
    vector<int> missed(n);


    for (int i = 0; i < n; ++i) {
        if (t[i] == 1) {
            baseTheorems += a[i];
            missed[i] = 0;
        } else {
            missed[i] = a[i];
        }
    }


    int currentSum = 0;
    for (int i = 0; i < k; ++i) {
        currentSum += missed[i];
    }

    int maxExtra = currentSum;

    for (int i = k; i < n; ++i) {
        currentSum = currentSum - missed[i - k] + missed[i];
        maxExtra = max(maxExtra, currentSum);
    }

    cout << (baseTheorems + maxExtra) << endl;

    return 0;
}
