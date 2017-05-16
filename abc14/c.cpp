#include<iostream>
using namespace std;
#include<vector>
 
int main(){
  int n;
  cin>>n;
  vector<int> a(1000001,0);
  int x=0;
  for(int i = 0;i < n;i++){
    int aa,bb;
    cin>>aa>>bb;
    bb++;
    a[aa]++;
    a[bb]--;
  }
  int ans = 0;
  for(int i = 0;i < 1000001;i++){
    x+=a[i];
    ans = max(ans,x);
  }
  cout<<ans<<endl;
}