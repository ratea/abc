#include<iostream>
using namespace std;
#include<cmath>
#include<stdio.h>

int main(){
	double l,x,y,s,d;
	cin>>l>>x>>y>>s>>d;
	if (d==s){
		cout<<0<<endl;
		return 0;
	}
	double di=d-s;
	if(di<0)di+=l;
	
	double ans=di/(x+y);
	
	if(x<y)ans=min(ans,(l-di)/(y-x));
	printf("%.14f\n",ans);
	return 0;
}