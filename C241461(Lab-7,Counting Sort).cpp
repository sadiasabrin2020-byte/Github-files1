#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n;
    cout<<"Enter Elements Num:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    vector <int> count (max+1,0);

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    int index=0;
    for(int i=0; i<=max; i++)
    {
        while(count[i]>0)
        {
            arr[index]=i;
            index++;
            count[i]--;
        }
    }

    cout<<"Sorted Array: "  ;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
