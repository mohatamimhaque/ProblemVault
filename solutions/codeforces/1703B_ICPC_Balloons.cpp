#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int time,n,i,data,ballon;
    cin>>time;
    while(time--){
        ballon=0;
        cin>>n;
        vector<char>vec;
        set<char> st;
        string str;
        cin>>str;
        for(char ch:str){
            if(!st.count(ch)){
                st.insert(ch);
                ballon++;
            }
            ballon++;
        }
        cout<<ballon<<"\n";
    }
    return 0;
}
