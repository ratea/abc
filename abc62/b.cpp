#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>

int main(){
  int h,w;
  cin>>h>>w;
  vector<string> a(h);
  for(int i = 0;i<w+2;i++)cout<<"#";
  cout<<endl;
  for(int i = 0;i<h;i++){
    cin>>a[i];
    cout<<"#"<<a[i]<<"#"<<endl;
  }

  for(int i = 0;i<w+2;i++)cout<<"#";
  cout<<endl;
return 0;



}
