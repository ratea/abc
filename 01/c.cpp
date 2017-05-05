#include<iostream>
using namespace std;
#include<vector>

int main(){
  string a;
  cin >> a;

  int x=0;
  int y=0;

  int z;

  int ans=0;

  for(int i =0;i<a.size();i++){
    z=0;
    x=0;
    y=0;
    for(int j =0;j<i;j++){
      x*=10;
      x+=a[j]-'0';
    }
    for(int j =i;j<a.size();j++){
      if(a[i]=='0')z=1;
      y*=10;
      y+=a[j]-'0';
    }
    if(z==0&&(x-y)%2==0){
      if(x<=y)ans++;
      //cout << x<<" "<<y<<endl;
    }
  }

  cout << ans << endl;

  return 0;
}
