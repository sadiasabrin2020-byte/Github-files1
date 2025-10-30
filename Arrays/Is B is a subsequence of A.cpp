#include<iostream>
#include<vector>
using namespace std;
int main(){
int N,M;
cin>>N>>M;
vector<int>A(N),B(M);
for(int i=0;i<N;i++){
    cin>>A[i];}

    for(int i=0;i<M;i++){
        cin>>B[i];
    }
   int j=0;
   for(int i=0;i<N&&j<M;i++) {
    if(A[i]==B[j]){
        ++j;
    }
   }
   if(j==M){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   return 0;
}
