#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

int main(){
  long long int h,w;
  cin>>h>>w;
  if(h%3==0||w%3==0){
    cout<<0<<endl;
    return 0;
  }

  long long int ans = h*w;

  for(int i = 1;i<h;i++){
    vector<long long int> x(3);
    x[0]=i*w;
    long long int w2=w/2;
    x[1]=w2*(h-i);
    x[2]=(w-w2)*(h-i);
    sort(x.begin(),x.end());
    long long int ans2 = x[2]-x[0];

    ans=min(ans,ans2);
  }

  for(int i = 1;i<w;i++){
    vector<long long int> x(3);
    x[0]=i*h;
    long long int w2=h/2;
    x[1]=w2*(w-i);
    x[2]=(h-w2)*(w-i);
    sort(x.begin(),x.end());
    long long int ans2 = x[2]-x[0];

    ans=min(ans,ans2);
  }

  ans=min(ans,w);
  ans=min(ans,h);

  cout<<ans<<endl;
  return 0;
}
