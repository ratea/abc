#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n,q;
  cin>>n>>q;
  vector<int> ans(n,0);

  for(int i = 0;i<q;i++){
    int l,r,q;
    cin>>l>>r>>q;
    l--;
    for(int j = l;j<r;j++){
      ans[j]=q;
    }
  }

  for(int i = 0;i<n;i++){
    cout<<ans[i]<<endl;
  }

  return 0;
}
