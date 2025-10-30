#include<bits/stdc++.h>

using namespace std;



int main(){

int n,q;

cin>>n>>q;



int num[n];

for(int i=0;i<n;i++)

cin>>num[i];

sort(num,num+n);

while(q--){

    int x;

    cin>>x;



    int l=0,r=n-1;

    int flag=0;

    while(l<=r){

        int m=(l+r)/2;





    if(num[m]==x)

    {

        flag=1;

        break;

    }

    else if(num[m]>x)

        {

        r=m-1;

        }

        else if (num[m]<x)

        {

            l=m+1;

        }

    }

if(flag == 1)

{

    cout<<"found"<<endl;

}

else

{

    cout<<"not found"<<endl;

}

}

}
