#include<iostream>
using namespace std;
int main(){
int A,B;
string s;
cin>>A>>B;
cin>>s;
if(s.length() != A+B+1){
    cout<<"No"<<endl;
    return 0;
}
if(s[A]!='-'){
    cout<<"No"<<endl;
    return 0;
}
for(int i=0;i<s.length();i++){
    if(i!=A && !isdigit (s[i])){
        cout<<"No"<<endl;
        return 0;
    }
}
cout<<"Yes"<<endl;
return 0;
}
