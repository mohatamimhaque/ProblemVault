#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<string> str;
    int size;
    cin>>size;
    string data;
    for(int i=0;i<size;i++){
        cin>>data;
        auto it = find(str.begin(), str.end(), data);
        if(it == str.end()) {
            cout<<"NO"<<endl;
            str.push_back(data);
        }else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
