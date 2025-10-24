#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the elements num:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

     for(i=0;i<n;i++){
    int key=arr[i];
    int j=i-1;

      while( j>=0 &&  arr[j] >key){
        arr[j+1]=arr[j];
        j--;
      }

      arr[j+1]=key;

}
cout<<"Sorted array:"<<endl;
 for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
 }

 return 0;
}
