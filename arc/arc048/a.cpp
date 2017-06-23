#include<iostream>
using namespace std;

int main(){
  long long int a,b;
  cin>>a>>b;
  if(a<0&&b>0)a++;
  cout<<b-a<<endl;
  return 0;
}
