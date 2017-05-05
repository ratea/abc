#include<iostream>
using namespace std;

int main(){
  long long int n,t;
  cin>>n>>t;

  string s;
  cin>>s;

  int ans = 0;
  int b=1;

  for(int i =0;i<s.size();i++){
    b=1;
    if(s[i]>='0'&&s[i]<='9'){
      int a = s[i]-'0';
      for(int j =0;j<a;j++){
        b*=n;
        if(b<0||b>1000000000){
          cout<<"TLE"<<endl;
          return 0;
        }
      }
      ans+=b;
      if(ans<0||ans>1000000000||ans*t<0||ans*t>1000000000){
        cout<<"TLE"<<endl;
        return 0;
      }
    }
  }

  cout<<ans*t<<endl;

  return 0;
}
