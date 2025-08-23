#include <bits/stdc++.h>
using namespace std;

int main() {
    string st,vowels="ayouie",dis="";
    cin >> st;
    for(char ch : st){
        ch = tolower(ch);
        bool is=false;
        for(char d : vowels){
            if(ch==d){
                is=true;
                break;
            }
        }
        if(is==false){
            dis+=".";
            dis+=ch;
        }
    }
   cout<<dis<<"\n";
    return 0;
}
