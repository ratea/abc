#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n,a;
  cin>>n>>a;
  vector<int> x(n);
  for(int i=0;i<n;i++){
    cin>>x[i];
    x[i]-=a;
  }
  //vector< vector< vector<int> > > dp(n,vector< vector<int> >(n,vector<int>(n,0)));

}
