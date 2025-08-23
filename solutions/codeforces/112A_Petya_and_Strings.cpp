#include <bits/stdc++.h>
using namespace std;
int main()
{
    string first,second;
    cin>>first;
    cin>>second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    if(first<second){
        cout<<-1;
    }else if(first>second){
        cout<<1;
    }else{
        cout<<0;
    }

    cout<<"\n";

  
  return 0;
}