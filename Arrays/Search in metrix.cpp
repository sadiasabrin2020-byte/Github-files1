#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }
    int X;
    cin >> X;
    bool found = false;
    for (int i = 0; i < N && !found; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == X) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

    return 0;
}
