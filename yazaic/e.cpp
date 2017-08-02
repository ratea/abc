#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int n;
    cin>>n;
    int a;
    if(n==0)break;
    vector<int> k(n);
    string s;
    for(int i=0;i<n;i++)cin>>k[i];
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(k[i%n]<=26){
        a=s[i]-k[i%n];
        if(a<'A'&&s[i]>='A'&&s[i]<='Z'){
           a+='z'-'A'+1;
         }else if(a<'a'&&s[i]>='a'&&s[i]<='z')a-='a'-'Z'-1;
      }else{
        a=s[i]+(52-k[i%n]);
        if(a>'z'&&s[i]<='z'&&s[i]>='a'){
          a-='z'-'A'+1;
        }else if(a>'Z'&&s[i]<='Z'&&s[i]>='A')a+='a'-'Z'-1;
      }
      //putchar(a);
      char A=a;
      cout<<A;
    }
    cout<<endl;
  }
  return 0;
}
