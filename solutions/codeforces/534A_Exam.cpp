#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
   //init_code();
    int n;
    cin>>n;
    vector<int>vec;
    if(n==3){
        cout<<2<<endl;
        cout<<1<<' '<<3<<endl;
    }else{


    for(int i=2;i<=n;i+=2){
        vec.push_back(i);
    }
    for(int i=1;i<=n;i+=2){
        vec.push_back(i);
    }
    if(fabs(vec[0]-vec[1])==1){
        n--;
    }
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<' ';
    }
    cout<<endl;
   }

   

    return 0;
}
