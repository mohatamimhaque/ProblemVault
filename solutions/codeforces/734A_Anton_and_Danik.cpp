#include <iostream>
using namespace std;
int main(){
    int Anton=0,Danik=0,time;
    string str;
    cin>>time;
    cin>>str;
    for(char s:str){
        s=='A'?Anton++ : Danik++;
    }
    string output =  Anton<Danik?"Danik":Anton==Danik?"Friendship":"Anton";

    cout<<output<<endl;
return 0;}