#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<map>

int main(){
  long long int n,k;
  cin>>n>>k;
  map<long long int,long long int> ans;

  for(int i = 0;i<n;i++){
    int a,b;
    cin>>a>>b;
    ans[a]+=b;
  }

  long long int m=0;

  for(auto &element:ans){
    m+=element.second;
    if(m>=k){
      cout<<element.first<<endl;
      break;
      return 0;
    }
	}
  return 0;
}
