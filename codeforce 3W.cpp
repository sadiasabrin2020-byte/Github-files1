
#include<bits/stdc++.h>

using namespace std;



int main(){

    long long int n,m,i,j,a[100][100],k;

    cin>>n>>m;



    for(i=0;i<n;i++)

    {

       for(j=0;j<m;j++)

       {

           cin>>a[i][j];

       }

    }



    long long int inv[n][m];

    for(i=0;i<n;i++){

        for(j=m-1,k=0;j>=0,k<m;k++,j--)

        {

          inv[i][k]=a[i][j];

        }

    }

    for(i=0;i<n;i++)

    {

       for(j=0;j<m;j++)

       {

           cout<<inv[i][j]<<" ";

    }

    cout<<endl;

    }



}
