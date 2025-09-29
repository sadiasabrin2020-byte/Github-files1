#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin >>n;
    while(n--)
{
        string s;
        cin>>s;

        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        int pairs=0;
        int singles=0;

        auto it=freq.begin();
        for(; it !=freq.end();it++){
            if(it ->second >= 2)
                pairs++;
            else
                singles++;
        }

        int k=pairs+(singles/2);


    cout<<k<<endl;}

    return 0;
}





