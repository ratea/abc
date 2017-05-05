#include<iostream>
using namespace std;

int main(){
  int l;
  string s;
  cin>>l>>s;

  for(int i = 0;i<l&&i<s.size();i++){
    cout<<s[i];
  }

  cout<<endl;
  return 0;
}
