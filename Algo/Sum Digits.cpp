#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int A,sum=0,r;
    cin>>A;
    string N;
    cin>>N;
  for(int i=0;i<A;i++){
    sum += N[i] - '0';
  }
    cout<<sum<<endl;
    return 0;
}
