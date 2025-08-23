#include <iostream>
using namespace std;
int main(){
    int man,height,i,width=0;
    cin>>man>>height;
    while(man--){
        cin>>i;
        if(i>height){
            width+=2;
        }
        else{
            width++;
        }
    }

 cout<<width<<endl;

return 0;}