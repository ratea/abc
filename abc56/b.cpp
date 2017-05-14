#include<iostream>
using namespace std;

int main(){
  int w,a,b;
  cin>>w>>a>>b;
  int ans = b-a-w;
  if(a<=b){
    if(ans<0){
      cout<<0<<endl;
    }else{
    cout<<ans<<endl;
  }
}else{
  ans=a-b-w;
  //cout<<ans<<endl;
  if(ans<0){
    cout<<0<<endl;
  }else{
  cout<<ans<<endl;
}
  return 0;

}}
