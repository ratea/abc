#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  int k,t;
  cin>>k>>t;
  vector<int> a(t);
  int sum=0;
  int mx=0;
  for(int i=0;i<t;i++){
    cin>>a[i];
    sum+=a[i];
    mx=max(mx,a[i]);
  }
  int ans=mx-(sum-mx);
  if(ans<2){
    ans=0;
  }else{
    ans--;
  }
  cout<<ans<<endl;
  return 0;
}
