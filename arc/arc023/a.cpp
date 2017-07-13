#include<iostream>
using namespace std;

int main(){
	int y,m,d;
	cin>>y>>m>>d;
	
	if(m==1||m==2){
		m+=12;
		y--;
	}
	
	int ans=365*y+(y/4)-(y/100)+(y/400)+((306*(m+1))/10)+d-429;
	y=2014;
	m=5;
	d=17;
	ans=365*y+(y/4)-(y/100)+(y/400)+((306*(m+1))/10)+d-429-ans;
	
	cout<<ans<<endl;
	return 0;
}