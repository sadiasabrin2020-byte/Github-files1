#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
int N,PD=0,SD=0;
cin>>N;
vector<vector<int>>A(N,vector<int>(N));
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cin>>A[i][j];
    }
}
for(int i=0;i<N;i++){
    PD += A[i][i];
    SD +=A[i][N-i-1];
}
cout<<abs(PD-SD)<<endl;
return 0;
}


