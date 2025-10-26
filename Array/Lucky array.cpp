#include<iostream>
using namespace std;
int main(){
    int N,n;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int min;
    int x=A[0];
    for(int i=0;i<N;i++){
          if(A[i]<x) {
            min++;
            n=min;
          }
    }
    if(n%2!=0){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}
