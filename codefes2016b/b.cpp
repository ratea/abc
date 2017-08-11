#include<iostream>
using namespace std;

int main(){
  int n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;

  int tho=0;
  int otho=0;

  for(int i=0;i<n;i++){
    if(s[i]=='a'&&tho<a+b){
      cout<<"Yes"<<endl;
      tho++;
    }else if(s[i]=='b'&&tho<a+b&&otho<b){
      cout<<"Yes"<<endl;
      tho++;
      otho++;
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
