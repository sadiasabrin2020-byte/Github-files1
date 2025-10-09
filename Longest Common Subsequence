#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string X,Y ;
    cin>>X>>Y;

    int m = X.length();
    int n = Y.length();

    vector<vector<int>> C(m + 1, vector<int>(n + 1, 0));


    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                C[i][j] = C[i - 1][j - 1] + 1;
            } else {
                C[i][j] = max(C[i][j - 1], C[i - 1][j]);
            }
        }
    }


    cout << "Length of LCS: " << C[m][n] << endl;


    int i = m, j = n;
    string lcsStr = "";

    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcsStr = X[i - 1] + lcsStr;
            i--;
            j--;
        } else if (C[i - 1][j] > C[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    cout << "LCS: " << lcsStr << endl;

    return 0;
}
