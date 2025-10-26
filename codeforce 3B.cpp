#include<iostream>
#include<vector>
using namespace std;
int main(){
int N,X,i;
int position= -1;
cin>>N;
vector<int>A(N);
for(int i=0;i<N;i++){
    cin>>A[i];
}
cin>>X;
for(int i=0;i<N;++i){
   if(X==A[i]) {
        position=i;
        break;
   }
   }
cout<<position<<endl;
return 0;
}
