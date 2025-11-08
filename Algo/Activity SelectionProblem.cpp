#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Activity {
    int start, finish;
};
bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}
int main()
{
    int n;
    cout<<"Enter the total activity number:  ";
    cin>>n;

vector<Activity>activities(n);
cout<<"Enter the start and finish time :\n";
for(int i=0;i<n;i++ ){
    cin>>activities[i].start>>activities[i].finish;
}
sort(activities.begin(),activities.end(),compare);

int count=1;
cout<<"Selected activity: "<<endl;
cout<<"("<<activities[0].start<<","<<activities[0].finish<<")\n" ;
int last_finish=activities[0].finish;

for(int i=1;i<n;i++){
    if(activities[i].start >= last_finish){
        cout<<activities[i].start<<","<<activities[i].finish<<endl;
        count++;
        last_finish=activities[i].finish;
    }
}
cout<<"Maximum number of activities: "<<count;

   return 0;

}

