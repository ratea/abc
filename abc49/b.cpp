#include<iostream>
using namespace std;
#include<vector>

int main(){
  int h,w;
  cin>>h>>w;
  vector<string> c(h);
  for(int i = 0;i<h;i++){
    cin>>c[i];
  }
  for(int i = 0;i<h*2;i++){
    cout<<c[i/2]<<endl;
  }

  return 0;
}
