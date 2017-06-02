#include<iostream>
using namespace std;
#include<vector>

int ans=1;
int n,k;

void dfs(int i,int j,int m,vector< vector<int> > &t){
  if(i<n){
    for(int l=0;l<k;l++){
      dfs(i+1,l,m^t[i][l],t);
    }
  }else{
    //cout<<m<<endl;
    if(m==0)ans=0;
  }
  return;
}

int main(){
  cin>>n>>k;
  vector< vector<int> > t( n,vector<int>(k) );
  for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
      cin>>t[i][j];
    }
  }
  dfs(0,0,0,t);
  if(ans==0){
    cout<<"Found"<<endl;
  }else{
    cout<<"Nothing"<<endl;
  }
  return 0;
}
