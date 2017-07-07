#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> s(n);
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  long long int val=1;
  int ans=0;
  int np=0;
  int ans2=0;
  for(int i=0;i<n;i++){
    if(s[i]==0){
      cout<<n<<endl;
      return 0;
    }

    val*=s[i];
    if(val>k){
      val/=s[np];
      np++;
      ans--;
      while(val>k&&np<i){
        val/=s[np];
        np++;
        ans--;
      }
      if(val<=k)ans++;
      if(ans<0)ans=0;
    }else{
      ans++;
      ans2=max(ans2,ans);
    }
  }
  cout<<ans2<<endl;
  return 0;
}
