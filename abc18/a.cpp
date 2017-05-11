#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	
	if(a>b&&a>c&&b>c)cout<<1<<endl<<2<<endl<<3<<endl;
	if(a>b&&a>c&&b<c)cout<<1<<endl<<3<<endl<<2<<endl;
	if(a<b&&a>c&&b>c)cout<<2<<endl<<1<<endl<<3<<endl;
	if(a<b&&a<c&&b>c)cout<<3<<endl<<1<<endl<<2<<endl;
	if(a>b&&a<c&&b<c)cout<<2<<endl<<3<<endl<<1<<endl;
	if(a<b&&a<c&&b<c)cout<<3<<endl<<2<<endl<<1<<endl;
	
	return 0;
}