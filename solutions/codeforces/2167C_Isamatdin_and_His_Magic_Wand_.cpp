#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int odd=0,even = 0,tmp;
        vector<int>vec;

        while(n--){
            cin>>tmp;
            odd += (tmp&1);
            even += !(tmp&1);
            vec.push_back(tmp);
        }

        if(even>0 && odd>0){
            sort(vec.begin(),vec.end());
        }
        n = vec.size();
        for(int i=0;i<n;i++){
            cout<<vec[i];
            if(i==n-1){
                cout<<endl;
            }else{
                cout<<' ';
            }
        }

    }
        
}


