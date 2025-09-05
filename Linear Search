#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int item;
cout<<"Enter the wanted value:"<<endl;
cin>>item;
int first=0,last=n-1;
bool found=false;
while(first<=last){
        int mid=(first+last)/2;
    if(item==arr[mid]){
        cout<<"Item found at index : "<<mid<<endl;
        found=true;
        break;
    }

    else if(item>arr[mid]){
        first=mid+1;
    }
    else{
        last=mid-1;
    }

}

if(!found){

    cout<<"Item not found!!";
}


return 0;
}
