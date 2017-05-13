#include<iostream>
using namespace std;
#include<vector>
#include<set>

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> ans(n+1,0);
  for(int i = 0;i<m;i++){
    int a,b;
    cin>>a>>b;
    ans[a]++;
    ans[b]++;
  }
  for(int i = 0;i<n;i++){
    cout<<ans[i+1]<<endl;
  }
  return 0;
}
