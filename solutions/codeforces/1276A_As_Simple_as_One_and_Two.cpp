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

    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin >> str;
        int len = str.length();
        
        if (len < 4) {
            if (str == "one" || str == "two") {
                cout << 1 << endl;   
                cout << 3 << endl;   
            } else {
                cout << 0 << endl;   
            }
        }
        else {
            vector<int> vec;  
            
            for (int i = 0; i < len - 2; i++) {
                if (str[i] == 'o' && str[i+1] == 'n' && str[i+2] == 'e'){
                    if(str[i+3] == 'e' && i<len-2){
                        vec.push_back(i + 2); 
                    }else{
                      vec.push_back(i + 3); 
                    }
                    i += 2;  
                } 
                else if(str[i] == 't' && str[i+1] == 'w' && str[i+2] == 'o') {
                    if(str[i+3] == 'o'  && i<len-2){
                        vec.push_back(i + 2); 
                    }else{
                      vec.push_back(i + 3); 
                    }
                    i += 2;
                }
            }
            
            cout << vec.size() << endl;  
            if (!vec.empty()) {
                for (int v : vec) {
                    cout << v << " ";   
                }
                cout << endl;
            }
        }
    }

    return 0;
}
