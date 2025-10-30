#include<iostream>
using namespace std;
long long fib(int N){
    if(N==1)
        return 0;
    if(N==2)
        return 1;
    int a=0,b=1,c;
    for(int i=3;i<=N;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
int N;
cin>>N;
cout<<fib(N)<<endl;
return 0;
}
