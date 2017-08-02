#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<bool> prime(1299709,1);
  prime[1]=0;
  for(int i=2;i<prime.size();i++){
    if(prime[i]==1){
      for(int j=i*2;j<prime.size();j+=i)prime[j]=0;
    }
  }
  //for(int i=0;i<prime.size();i++)if(prime[i]==1)cout<<i<<" ";
  while(1){
    int n;
    cin>>n;
    if(n==0)break;
    int ans=0;
    for(int i=0;i<prime.size();i++){
      if(prime[n+i]==1)break;
      ans++;
    }
    for(int i=0;i<prime.size();i++){
      if(prime[n-i]==1)break;
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
