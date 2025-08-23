#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i=0,count=0;
  cin>>n;
  while(i<n){
    int p,q,r;
    cin>>p>>q>>r;
    if(p==1&&q==1||q==1&&r==1||p==1&&r==1){
      count++;
    }
   i++;
  }
  cout<<count<<"\n";
  return 0;
}