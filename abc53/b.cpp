#include <iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  int i = 0;
  while(1){
    if(s[i]=='A')break;
    i++;
  }

  int j = i;
  int ans;
  while(1){
    if(s.size()<j)break;
    if(s[j]=='Z')ans=j;
    j++;
  }
  ans++;
  cout<<ans-i<<endl;
}
