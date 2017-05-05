#include<iostream>
using namespace std;

int main(){
  long long int n,k,ans;
  cin>>n>>k;
  ans=0;
  int max = n-k+1;

  for(int i = 1;i<=n;i++){
    long long int a;
    cin>>a;
    if(i<max){
      ans+=a*i;
    }else if(i>n-max){
      ans+=a*(n-i+1);
    }else{
      ans+=a*max;
    }
  }

  cout<<ans<<endl;

  return 0;
}
