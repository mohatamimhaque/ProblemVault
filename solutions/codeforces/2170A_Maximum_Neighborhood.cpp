#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n+2][n+2];

        for(int i=0;i<=n+1;i++){
            for(int j=0;j<=n+1;j++){
                arr[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j] = (i-1)*n + j;
            }
        }

        int res = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                res = max(res,arr[i][j]+arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1]);
            }
        }

        cout<<res<<endl;
    }
}
