#include<iostream>
using namespace std;

int main(){
  int n;
  string t,s,u;
  u="abcdefghijklmnopqrstuvwxyz";
  cin>>n>>t;
  cin.ignore();
  getline(cin, s);
  for(int i = 0; i<n;i++){
    for(int j = 0;j<s.size();j++){
      if(s[j]!=' '){
      //s[j]=t[s[j]-'a'];
      for(int k=0;k<27;k++){
        if(s[j]==t[k]){
          s[j]=u[k];
          break;
        }
        }
      }
    }
  }
  cout<<s<<endl;
}
