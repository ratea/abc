#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,C;
  cin>>n>>C;
  vector<vector<long long int> > imos(C,vector<long long int>((1e5+1)*2,0));
  long long int s,t,c;
  for(long long int i=0;i<n;i++){
    cin>>s>>t>>c;
    c--;
    s*=2;
    s--;
    t*=2;
    imos[c][s]++;
    imos[c][t+1]--;
  }

  //for(int i=0;i<10;i++)cout<<imos[0][i]<<" ";

  vector<long long int> tmp(C,0);
  long long int ans=0;
  for(long long int i=0;i<(1e5)*2+1;i++){
    long long int anstmp=0;
    for(long long int j=0;j<C;j++){
      tmp[j]+=imos[j][i];
      if(tmp[j]>1)tmp[j]=1;
      if(tmp[j]<0)tmp[j]=0;
      anstmp+=tmp[j];
    }
    if(i%2==1)ans=max(ans,anstmp);
  }
  cout<<ans<<endl;
}
