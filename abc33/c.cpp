#include<iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  int sta=1;
  int val=0;
  int ans=0;
  for(int i=0;i<s.size();i++){
    //cout<<sta<<endl;
    if(i%2==0){
      if(s[i]=='0')sta=0;
    }else{
      if(s[i]=='+'){
        ans+=sta;
        sta=1;
      }
    }
  }
  ans+=sta;
  cout<<ans<<endl;
  return 0;
}
