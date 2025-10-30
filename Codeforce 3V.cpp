#include<iostream>
#include<vector>
using namespace std;
int main(){
int N,M;
cin>>N>>M;
vector<int>A(N);
for(int i=0;i<N;i++){
    cin>>A[i];
}
vector<int> frequency(M + 1, 0);
    for (int i = 0; i < N; ++i) {
        ++frequency[A[i]];
    }
    for (int i = 1; i <= M; ++i) {
        cout << frequency[i] << endl;
    }

    return 0;
}

