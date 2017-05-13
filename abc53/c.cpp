#include<iostream>
using namespace std;

int main(){
  long long int x;
  cin>>x;
  long long int ans = (x/11)*2;
  ans+=(x%11)/6;
  if((x%11)%6!=0)ans++;
  cout<<ans<<endl;
  return 0;
}
