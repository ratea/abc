#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n,m;
  int x,y;
  cin>>n>>m>>x>>y;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  vector<int> b(m);
  for(int i=0;i<m;i++)cin>>b[i];
  int i=0;
  int j=0;
  int flag=0;
  int ntime=0;
  int ans=0;
  while(i<n||j<m){
    if(flag==0){
      if(i>=n)break;
      if(a[i]>=ntime){
        ntime=a[i]+x;
        flag=1;
        //cout<<a[i]<<" "<<ntime<<endl;
      }
      i++;
    }else{
      if(j>=m)break;
      if(b[j]>=ntime){
        ntime=b[j]+y;
        flag=0;
        ans++;
        //cout<<b[j]<<" "<<ntime<<endl;
      }
      j++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
