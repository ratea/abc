#include "bits/stdc++.h"
using namespace std;

int main(){
	string a,b,c;
	cin>>a>>b>>c;
	
	int ap=0;
	int bp=0;
	int cp=0;
	
	int flag=0;
	
	while(1){
		if(flag==0){
			if(a.size()==ap){
			cout<<"A"<<endl;
			return 0;
		}
			if(a[ap]=='b'){
				flag=1;
			}else if(a[ap]=='c'){
				flag=2;
			}
			ap++;
		}else if(flag==1){
			if(b.size()==bp){
			cout<<"B"<<endl;
			return 0;
		}
			if(b[bp]=='a'){
				flag=0;
			}else if(b[bp]=='c'){
				flag=2;
			}
			bp++;
		}else if(flag==2){
			if(c.size()==cp){
			cout<<"C"<<endl;
			return 0;
		}
			if(c[cp]=='a'){
				flag=0;
			}else if(c[cp]=='b'){
				flag=1;
			}
			cp++;
		}
		
		
		
		
	}
	
	
	return 0;
}