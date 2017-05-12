#include<iostream>
using namespace std;

int main(){
  int k,s;
  cin>>k>>s;
  k++;
  int ans = 0;
  for(int i = 0;i<k;i++){
    for(int j = 0;j<k;j++){
      int h = s-i-j;
          if(h<k&&h>=0){
            ans++;
          }
    }
  }
  cout<<ans<<endl;
  return 0;
}
