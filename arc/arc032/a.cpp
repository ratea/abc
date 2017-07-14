#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a=1;
  for(int i=2;i<n+1;i++)a+=i;
  if(a%2==0||a==1){
    cout<<"BOWWOW"<<endl;
    return 0;
  }
  for(int i=3;i<a/2;i+=2){
    if(a%i==0){
      cout<<"BOWWOW"<<endl;
      return 0;
    }
  }
  cout<<"WANWAN"<<endl;
  return 0;
}
