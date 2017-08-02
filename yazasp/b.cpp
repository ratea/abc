#include<iostream>
#include<vector>
using namespace std;

int main(){
  string s;
  cin>>s;
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='N')a=1;
    if(s[i]=='S')b=1;
    if(s[i]=='W')c=1;
    if(s[i]=='E')d=1;
  }
  if(a==b&&c==d){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
