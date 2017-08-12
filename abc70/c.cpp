#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

long long int gcd (long long int a,long long int b )
{
  long long int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

long long int lcm(long long int x, long long int y)
{
  return x/gcd(x,y)*y;
}

int main(){
  long long int n;
  cin>>n;
  vector<long long int> t(n);
  for(long long int i=0;i<n;i++)cin>>t[i];

  long long int ans=t[0];
  for(int i=1;i<n;i++)ans=lcm(ans,t[i]);
  cout<<ans<<endl;

  return 0;
}
