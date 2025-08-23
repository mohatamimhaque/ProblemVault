#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n,p,data,highest,second;
    cin>>n;
    while(n--){
        vector<int> arr;
        cin>>p;
        for(int i=0;i<p;i++){
            cin>>data;
            arr.push_back(data);
        }
        vector<int>vec=arr;
        sort(vec.begin(), vec.end(), std::greater<int>());
        highest=vec.at(0);
        second=vec.at(1);

        for(int i=0;i<p;i++){
            data=arr.at(i);
            if(data==highest){
                cout<<highest-second<<' ';
            }
            else{
                cout<<data-highest<<' ';
            }
        }
        cout<<endl;
        
    }
    return 0;
}
