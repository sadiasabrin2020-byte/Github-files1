#include<iostream>
#include<vector>
using namespace std;
int main(){
int N,min,max;
cin>>N;
vector<int>A(N);
for(int i=0;i<N;i++){
    cin>>A[i];
}
 min =0,max=0;
for(int i=0;i<N;i++){
    if(A[i]<A[min]){
        min=i;
        }
        if(A[i]>A[max]){
                max=i;
        }
}
    swap(A[min],A[max]);
    for(int i=0;i<N;i++){
    cout<<A[i]<<" ";}
    return 0;
}
