#include<iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n=0;
  int m=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='S')n++;
    if(s[i]=='T'&&n!=0){
      n--;
      m++;
    }
    //cout<<n<<" "<<m<<endl;
  }
  cout<<s.size()-(m*2)<<endl;
  return 0;
}
