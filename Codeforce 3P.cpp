#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, operations = 0;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    while (true) {
        bool allEven = true;

        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if (!allEven) break;
        for (int i = 0; i < N; i++) {
            A[i] /= 2;
        }
        operations++;
    }
    cout << operations << endl;
    return 0;
}

