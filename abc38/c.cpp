#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  long long int ans=n;
  int cnt=1;
  int sa=1000009;
  for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]){
      /*
      if(a[i+1]-a[i]==sa){
        ans+=cnt;
        cnt++;
      }else{
      */
        ans+=cnt;
        cnt++;
        sa=a[i+1]-a[i];
      //}
    }else{
      cnt=1;
      sa=1000009;
    }
  }
  cout<<ans<<endl;
  return 0;
}
