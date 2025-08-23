#include <iostream>
using namespace std;
int main(){
    int time,total=0,highest=0,a,b;
    cin>>time;
    while(time--){
        cin>>a>>b;
        total+=(b-a);
        if(highest<total){
            highest=total;
        }
    }
    cout<<highest;


    cout<<endl;
return 0;}