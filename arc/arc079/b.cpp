#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  long long int k;
  cin>>k;
  cout<<50<<endl;
  int n=50;
  vector<long long int> a(n);
  long long int x=k/50;
  for(int i=0;i<n;i++)a[i]=i+x;

  x*=50;

  while(1){
    if(x==k)break;
    //cout<<a[0]<<endl;
    a[0]+=n;
    for(int i=1;i<n;i++)a[i]--;
    x++;
    sort(a.begin(),a.end());
  }
  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[49]<<endl;

  return 0;
}
