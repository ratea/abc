#include<iostream>
using namespace std;
#include<vector>

int main(){
  long long int n,a;
  cin>>n>>a;
  vector<long long int> x(n);
  long long int mx=0;
  for(int i=0;i<n;i++){
    cin>>x[i];
    mx=max(mx,x[i]);
    x[i]-=a;
  }
  //vector< vector< vector<int> > > dp(n,vector< vector<int> >(n,vector<int>(n,0)));
  vector<vector<long long int> > dp(n+1,vector<long long int>(n*mx*2,0));

  dp[0][n*mx]=1;

  for(int i=1;i<n+1;i++){
    //cout<<x[i]<<endl;
    for(int j=0;j<n*mx*2;j++){
        dp[i][j]=dp[i-1][j]+dp[i-1][j-x[i-1]];
    }
  }

  cout<<dp[n][n*mx]-1<<endl;
  return 0;
}
