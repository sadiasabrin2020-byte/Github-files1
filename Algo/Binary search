#include<iostream>
using namespace std;
int main(){
int arr[10]={-1,0,3,4,5,9,12};
int target=12;
int n;

int start=0,end=n-1;
for(start=0;start<=n;start++){
while(start<=end){
    int mid=start+end/2;
    if(target>arr[mid]){
        start=mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else{
        return mid;
    }
}
}
return 0;
}
