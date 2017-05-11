#include<iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  for(int i = 0;i<s.size();){
    if(s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e'&&s[i+5]!='r'){
      i+=5;
    }else if(s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e'&&s[i+5]=='r'){
      i+=6;
    }else if(s[i]=='d'&&s[i+1]=='r'&&s[i+2]=='e'&&s[i+3]=='a'&&s[i+4]=='m'&&(s[i+5]!='e'||s[i+7]=='a'||s[i+5]==s.size())){
      i+=5;
    }else if(s[i]=='d'&&s[i+1]=='r'&&s[i+2]=='e'&&s[i+3]=='a'&&s[i+4]=='m'&&s[i+5]=='e'&&s[i+6]=='r'&&s[i+7]!='a'){
      i+=7;
    }else{
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
