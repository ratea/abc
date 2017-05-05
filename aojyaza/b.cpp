#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n,m,t;
  cin>>n>>m>>t;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }


  //cout<<"aaa"<<endl;

  int ans = 0;
  if(a[0]>=m)ans+=a[0]-m;

  for(int i = 1;i<n;i++){
    if(a[i]-a[i-1]>=m*2){
      ans+=(a[i]-a[i-1])-m*2;
    }
  }
  ans+=t-a[n]-m;

  cout<<ans<<endl;
  return 0;
}
