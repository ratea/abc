#include "bits/stdc++.h"
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(1e5+1,1);
  a[0]=0;
  a[1]=0;
  for(int i=2;i<1e5+1;i++){
    if(a[i]==1){
      for(int j=i+i;j<1e5+1;j+=i)a[j]=0;
    }
  }
  //for(int i=0;i<100;i++)cout<<i<<" "<<a[i]<<endl;
  vector<int> r(1e5+1,0);
  int tmp=0;
  for(int i=0;i<1e5+1;i++){
    if(a[i]==1&&a[(i+1)/2]==1)tmp++;
    r[i]=tmp;
  }

  int l,r1;
  for(int i=0;i<n;i++){
    cin>>l>>r1;
    cout<<r[r1]-r[l-1]<<endl;
  }
}
