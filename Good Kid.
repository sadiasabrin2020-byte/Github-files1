#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long max_product = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> b = a;
            b[i] += 1;
            long long product = 1;
            for (int j = 0; j < n; ++j) {
                product *= b[j];
            }

            if (product > max_product) {
                max_product = product;
            }
        }

        cout << max_product << endl;
    }

    return 0;
}
