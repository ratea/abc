#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
  int n;
  cin>>n;
  vector<int> t(n);
  for(int i=0;i<n;i++)cin>>t[i];
  sort(t.begin(),t.end());
  int a=0;
  int b=0;
  for(int i=n-1;i>=0;i--){
    if(a<b){
      a+=t[i];
    }else{
      b+=t[i];
    }
  }
  cout<<max(a,b)<<endl;
  return 0;
}
