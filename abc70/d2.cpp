#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
  long long int inf=1000000009;
  long long int n;
  cin>>n;
  vector< vector<long long int> > vp(n,vector<long long int>(n,inf));
  for(int i=0;i<n-1;i++){
    long long int a,b,c;
    cin>>a>>b>>c;
    a--;
    b--;
    vp[a][b]=c;
    vp[b][a]=c;
  }
  //cout<<"a"<<endl;
  long long int q,k;
  cin>>q>>k;
  q--;
  k--;
  queue<long long int> qu;
  qu.push(k);
  vector<long long int> used(n,0);
  used[k]=1;
  vp[k][k]=0;
  while(qu.empty()==0){
    long long int np=qu.front();
    qu.pop();
    //cout<<np<<endl;
    for(long long int i=0;i<n;i++){
      //cout<<vp[np][i]<<" "<<np<<" "<<i<<endl;
      if(used[i]==0&&vp[np][i]<inf){
        //cout<<vp[k][np]<<" "<<vp[np][i]<<endl;
        vp[k][i]=vp[k][np]+vp[np][i];
        vp[i][k]=vp[k][np]+vp[np][i];
        //cout<<vp[k][i]<<endl;
        qu.push(i);
        used[i]=1;
      }
    }
  }
  for(long long int i=0;i<q+1;i++){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    cout<<vp[a][k]+vp[k][b]<<endl;
  }

  return 0;
}
