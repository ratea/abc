#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(m+1);
  vector<int> b(m+1);
  vector<int> c(m+1);

  for(int i = 1;i<m+1;i++){
    cin>>a[i]>>b[i]>>c[i];
  }
  int np=1;
  int ans=0;
  int gl;
  while(1){
    ans+=c[np];
    np=b[np];
    if(a[np]==n){
      gl=ans;
      break;
    }
  }
  int gl2;
  while(1){
    ans+=c[np];
    np=b[np];
    if(a[np]==n){
      gl2=ans;
      break;
    }
  }
  if(gl>=gl2){
    cout<<gl<<endl;
  }else{
    cout<<"inf"<<endl;
  }
  return 0;
}
