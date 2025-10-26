#include<iostream>
using namespace std;
int main()
{
    int N,low,i,index;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    low=A[0];
    index=1;
    for(int i=1; i<N; i++)
    {
        if(A[i]<low)
        {
            low=A[i];
            index=i+1;

        }
    }
    cout<<low<<" "<<index<<endl;
    return 0;
}

