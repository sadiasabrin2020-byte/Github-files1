#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<=N;i++){
        for(int j=0;j<N-i-1;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
    for(int i =0;i<N;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
