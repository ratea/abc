#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  if(s==t){
    cout<<n<<endl;
    return 0;
  }
  int i,j;
  int mis=0;
  for(i=0;i<n;i++){
    if(s[i]==t[0]){
      for(j=0;j<n-i;j++){
        //cout<<s[i+j]<<t[j]<<endl;
        if(s[i+j]!=t[j]){
          break;
        }
      }
    }
    mis=max(mis,j);
  }
  cout<<2*n-mis<<endl;
  return 0;
}
