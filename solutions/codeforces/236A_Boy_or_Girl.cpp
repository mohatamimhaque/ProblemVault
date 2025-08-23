#include <bits/stdc++.h>
using namespace std;

int main() {
    string st,dis="";
    int size=0;
    cin >> st;
    for(char ch : st){
        bool is=false;
        for(char d : dis){
            if(ch==d){
                is=true;
                break;
            }
        }
        if(is==false){
            size++;
            dis+=ch;
        }
    }
    if(size%2==0){
        cout<<"CHAT WITH HER!\n";
    }else{
        cout<<"IGNORE HIM!\n";
    }

    return 0;
}
