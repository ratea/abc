#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int nt=0;
  for(int i=0;i<10000;i++){
    if(nt%60<=c&&c<=nt%60+a){
      cout<<nt+c-(nt%60)<<endl;
      return 0;
    }
    nt+=a;
    nt+=b;
  }
  cout<<-1<<endl;
  return 0;
}
