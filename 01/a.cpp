#include<iostream>
using namespace std;

int main(){
  string p;
  cin>>p;
  int a=0;
  int b=0;
  int c=0;

for(int i = 0;i<p.size();i++){
  if(p[i]>='a'&&p[i]<='z')a=1;
  if(p[i]>='A'&&p[i]<='Z')b=1;
  if(p[i]>='0'&&p[i]<='9')c=1;
}

  if(p.size()>=6&&a&&b&&c){
    cout << "VALID"<<endl;
  }else{
    cout <<"INVALID"<<endl;
  }
}
