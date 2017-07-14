#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>

int main(){
  int n;
  cin>>n;
  double a,b,c,d,e,ans;
  ans=0;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c>>d>>e;
    ans=max(ans,a+b+c+d+(e*110/900));
  }
  printf("%.5f",ans);
  cout<<endl;
  return 0;
}
