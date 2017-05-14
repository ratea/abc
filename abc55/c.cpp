#include<iostream>
using namespace std;

int main(){
  long long int n,m;
  cin>>n>>m;
  if(n*2>=m){
    cout<<m/2<<endl;
    return 0;
  }
  long long int ans = n;
  long long int tmp=m-(n*2);
  ans+=tmp/4;
  cout<<ans<<endl;
  return 0;
}
