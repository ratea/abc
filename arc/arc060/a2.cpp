#include<iostream>
using namespace std;
#include<vector>

int main(){
  long long int n,a;
  cin>>n>>a;
  vector<long long int> x(n);
  for(int i=0;i<n;i++){
    cin>>x[i];
    x[i]-=a;
  }
  //vector< vector< vector<int> > > dp(n,vector< vector<int> >(n,vector<int>(n,0)));
  vector<vector<long long int> > dp(n+1,vector<long long int>(n*n*2,0));

  dp[0][n*n]=1;

  for(int i=1;i<n+1;i++){
    //cout<<x[i]<<endl;
    for(int j=0;j<n*n*2;j++){
      dp[i][j]=dp[i-1][j]+dp[i-1][j-x[i-1]];
      // dp[i+1][j+(n*n)]+=dp[i][j+(n*n)];
      // dp[i+1][j+x[i]+(n*n)]+=dp[i][j+(n*n)];
    }
  }

  cout<<dp[n][n*n]-1<<endl;
  return 0;
}
