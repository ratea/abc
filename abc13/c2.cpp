#include<iostream>
using namespace std;

int main(){
	int n,h;
	int a,b,c,d,e;
	cin >> n >> h;
	cin >> a >> b >> c >> d >> e;
	
	
	
	for(int i = n;i>0;i--){
		if(h-e>0){
			h-=e;
		}else if(i>