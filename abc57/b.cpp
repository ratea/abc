#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> gx(n);
  vector<int> gy(n);
  vector<int> cx(m);
  vector<int> cy(m);
  for(int i = 0;i<n;i++){
    cin>>gx[i]>>gy[i];
  }
  for(int i = 0;i<m;i++){
    cin>>cx[i]>>cy[i];
  }
  for(int i = 0;i<n;i++){
    int ans = 1000000000;
    int ansn;
    int j;
    for(j = m-1;j>=0;j--){
      int dir=abs(gx[i]-cx[j])+abs(gy[i]-cy[j]);
      if(ans>=dir){
        ans=dir;
        ansn=j;
      }
    }
    cout<<ansn+1<<endl;
  }
  return 0;

}
