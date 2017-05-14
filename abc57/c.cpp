#include<iostream>
using namespace std;

int main(){
  long long int n;
  cin>>n;
  long long int a,b;
  a=n;
  b=0;
  for(;a>b;a--){
    if(n%a==0){
      b=n/a;
      //cout<<a<<" "<<b<<endl;
    }
  }
  long long int ansn=0;
  long long int x = max(a,b);
  for(int i = 0;x>0;x/=10)ansn++;
  cout<<ansn<<endl;


  return 0;


}
