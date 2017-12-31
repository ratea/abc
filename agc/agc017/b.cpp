#include "bits/stdc++.h"
using namespace std;

int main(){
  long long int n,a,b,c,d;
  cin>>n>>a>>b>>c>>d;
  long long int x=n-1;
  long long int cm;
  if(x%2==0){
    cm=(d-c)*x/2;
    if(abs(a-b)<=cm){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }else{
    cm=(d-c)*(x-1)/2;
    if(((b-a)<=(cm+d)&&(b-a)>=c-cm)||((b-a)>=(-1*d)-cm&&(b-a)<=cm-c)){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}
