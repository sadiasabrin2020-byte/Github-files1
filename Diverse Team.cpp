#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> unique_indices;
    for (int i = 0; i < n; i++) {
        if (unique_indices.size() < k && unique_indices.count(a[i]) == 0) {
            unique_indices[a[i]] = i + 1;
        }
    }

    if ((int)unique_indices.size() < k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        int count = 0;
        for (auto &p : unique_indices) {
            cout << p.second << " ";
            count++;
            if (count == k) break;
        }
        cout << "\n";
    }

    return 0;
}
