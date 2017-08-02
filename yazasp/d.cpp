#include<iostream>
using namespace std;

int main(){
  string x;
  cin>>x;
  int j=0;
  int mas=0;
  for(int i=0;i<x.size()-1;i++){
    if(x[i]=='S'&&x[i+1]=='T'){
      mas++;
      for(j=1;j<i+1;j++){
        if(x[i-j]=='S'&&x[i+1+j]=='T'){
          mas++;
        }else{
          j=0;
          i+=j;
          break;
        }
      }
    }
  }
  if(mas*2>100000){
    cout<<x.size()-100000<<endl;
  }else{
    cout<<x.size()-(mas*2)<<endl;
  }
  return 0;
}
