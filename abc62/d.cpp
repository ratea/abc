#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<n;i++){
    cin>>b[i];
  }
  for(int i = 0;i<n;i++){
    cin>>c[i];
  }
  sort(a.begin(),a.end());
  sort(c.begin(),c.end(),greater<int>());
  int ans=-1000000000;
  for(int i = 0;i<n;i++){
    int lsum=0;
    int rsum=0;
    for(int j = 0;j<n;j++){
      if(j+i<n){
        lsum+=a[j+i];
      }else{
        lsum+=b[j-i];
      }

      if(j+i<n){
        rsum+=c[j+i];
      }else{
        rsum+=b[n-j+i];
      }
    }
    int ans2=lsum-rsum;
    ans=max(ans,ans2);
  }

  cout<<ans<<endl;
  return 0;


}
