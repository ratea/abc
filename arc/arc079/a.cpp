#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> ab[n];
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    ab[a].push_back(b);
    ab[b].push_back(a);
  }

  for(int i=0;i<ab[0].size();i++){
    int c=ab[0][i];
    for(int j=0;j<ab[c].size();j++){
      if(ab[c][j]==n-1){
        cout<<"POSSIBLE"<<endl;
        return 0;
      }
    }
  }

  cout<<"IMPOSSIBLE"<<endl;

  return 0;
}
