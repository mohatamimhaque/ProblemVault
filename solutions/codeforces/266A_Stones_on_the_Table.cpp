#include <bits/stdc++.h>
using namespace std;

int main() {
    string st;
    char d='.';
    int n,size=0;
    cin>>n;
    cin >> st;
    for(char ch : st){
        if(d==ch){
            size++;
        }
        d=ch;
    }
   cout<<size<<"\n";
    return 0;
}