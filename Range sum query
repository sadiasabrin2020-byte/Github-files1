#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1);
    vector<long long> pre(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        pre[i] = pre[i - 1] + A[i];
    }

    for (int i = 0; i < Q; ++i) {
        int L, R;
        cin >> L >> R;
        cout << pre[R] - pre[L - 1] << endl;
    }

    return 0;
}
