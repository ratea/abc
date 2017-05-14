#include<iostream>
using namespace std;
#include<vector>

int main(){
  long long int n;
  cin >>n;
  vector<int> soi;
  long long int nn=n
  long long int a = 0;
  while(nn>=a*a){
    if(nn%a==0){
      nn/=a;
      soi.push_back(a);
    }
  }
  soi.push_bask(nn);

  
}
