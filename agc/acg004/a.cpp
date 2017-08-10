#include<iostream>
using namespace std;

int main(){
  long long int a,b,c;
  cin>>a>>b>>c;
  long long int ans=min(b*c,min(a*c,a*b));
  if(a%2==0||b%2==0||c%2==0)ans=0;
  cout<<ans<<endl;
  return 0;
}
