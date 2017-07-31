#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ans=1;
  while(1){
    if(ans*2>n)break;
    ans*=2;
  }
  cout<<ans<<endl;
  return 0;
}
