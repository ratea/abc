#include<iostream>
using namespace std;

int main(){
  long long int m,rd,cd,rr,cr;
  cin>>m>>rd>>rr>>cd>>cr;
  long long int l;
  long long int r;
  long long int x;
  long long int y;


  if(cd==0){
    x=-1;
  }else{
  l=0;
  r=1000000000002LL;
  x=r/2;
  while(r-l>1){
    //cout << x <<" "<<x*rd/100<<" "<<l<<" "<<r<<" "<<endl;
    if(x*rd/100>=cd){
      r=x;
    }else{
      l=x;
    }
    x=(l+r)/2;
  }
}

if(cr==0){
  y=-1;
}else{
  l=0;
  r=1000000000002LL;
  y=r/2;
  while(r-l>1){
    if(y*rr/100>=cr){
      r=y;
    }else{
      l=y;
    }
    y=(l+r)/2;
  }
}

  x++;
  y++;
  //cout <<m<<" "<<x<<" "<<y<<endl;
  long long int ans=m-x-y+((((x*rd/100)-cd)*100/rd)+(((y*rr/100)-cr)*100/rr));
  if(m-x-y<0){
    cout << -1 << endl;
    return 0;
  }

if(ans<0){
  cout << -1 << endl;
}else{
  cout << ans << endl;
}

  return 0;
}
