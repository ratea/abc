#include<iostream>
using namespace std;
#include<vector>
#include<queue>

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(m+1);
  vector<int> b(m+1);
  vector<int> c(m+1);
  queue<int> q;
  queue<int> q2;

  for(int i = 1;i<m+1;i++){
    cin>>a[i]>>b[i]>>c[i];
  }
  vector<int> p2(m+1,-1000000000);
  int np = 1;
  p2[1]=0;
  while(1){
    for(int i = 0;i<m;i++){
      if(a[i]==np){
        q.push (b[i]);
      }
    }
    if(q.empty())break;

    np=q.front();
    q.pop();
    p2[np]=max(x+c[np],p2[np]);
  }
  cout<<p2[n]<<endl;
  return 0;



}
