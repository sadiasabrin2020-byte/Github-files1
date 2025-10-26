#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=1; i<=N; i++)
    {
        cin>>A[i];
    }
    for(int i=N;i>=1;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}
