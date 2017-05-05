#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;

  int ans;

  if(a<=b)ans=c/a;
  if(a>b)ans=c/b;

  cout<<ans<<endl;
  return 0;
}
