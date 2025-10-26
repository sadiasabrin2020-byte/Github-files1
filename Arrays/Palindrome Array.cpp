#include<iostream>
using namespace std;
int main(){
    int N,n;
    cin>>N;
    int A[N];
   int palindrome=true;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N/2;i++){
            if(A[i] != A[N-i-1]){
                palindrome=false;
                break;

            }
    }
            if(palindrome){
cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
return 0;

}
