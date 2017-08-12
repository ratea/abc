#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x=max(a,c);
  int y=min(b,d);
  //cout<<x<<" "<<y<<endl;
  int ans=y-x;
  if(ans<0)ans=0;
  cout<<ans<<endl;


  return 0;
}
