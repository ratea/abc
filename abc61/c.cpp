#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> ans(n,0);
  vector<int> ansp(n,0);
  for(int i = 0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(ans[i]==0)ans[i]=a;
    ansp[a]+=b;
  }
  sort(ans.begin(),ans.end());
  int m=0;
  int j;
  for(j = 0;m<k;j++){
    m+=ansp[ans[j]];
    cout<<m<<endl;
  }

  cout<<ans[j]<<endl;
  return 0;
}
