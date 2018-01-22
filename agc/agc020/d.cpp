#include "bits/stdc++.h"
using namespace std;

int main(){
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int x=min(a,b)+1;
		int y=max(a,b)/x;
		if(max(a,b)%x!=0)y++;
		cout<<x<<" "<<y<<endl;
		string s(2001,'A');
		
		for(int i=y;i<max(a,b)*2+1;i+=y){
			for(int j=0;j<y;j++){
				s[i]='B';
				i++;
			}
		}
		
		int flag=0;
		int outb=0;
		int cb=abs(a-b);
		if(a>=b){
			for(int i=c-1;i<d;i++){
				if(s[i]=='B'&&outb<cb)
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	
}