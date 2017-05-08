#include<iostream>
using namespace std;

int main(){
	string a,b,c;
	cin>>a>>b>>c;
	
	int sta = 0;
	int am=0;
	int bm=0;
	int cm=0;
	
	while(1){
		if(sta==0){
			if(am==a.size()){
				cout<<"A"<<endl;
				return 0;
			}
			if(a[am]=='a'){
				sta=0;
			}else if(a[am]=='b'){
				sta=1;
			}else if(a[am]=='c'){
				sta=2;
			}
			am++;
		}
		
		if(sta==1){
			if(bm==b.size()){
				cout<<"B"<<endl;
				return 0;
			}
			if(b[bm]=='a'){
				sta=0;
			}else if(b[bm]=='b'){
				sta=1;
			}else if(b[bm]=='c'){
				sta=2;
			}
			bm++;
		}
		
		if(sta==2){
			if(cm==c.size()){
				cout<<"C"<<endl;
				return 0;
			}
			if(c[cm]=='a'){
				sta=0;
			}else if(c[cm]=='b'){
				sta=1;
			}else if(c[cm]=='c'){
				sta=2;
			}
			cm++;
		}
	}
	
	return 0;
}