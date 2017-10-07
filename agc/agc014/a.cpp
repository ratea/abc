#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	
	long long int ta,tb,tc;
	
	long long int aa=a;
	long long int bb=b;
	long long int cc=c;
	
	int cnt=0;
	
	while(a%2==0&&b%2==0&&c%2==0){
		cnt++;
		ta=b/2+c/2;
		tb=a/2+c/2;
		tc=a/2+b/2;
		
		a=ta;
		b=tb;
		c=tc;
		
		//cout<<a<<" "<<b<<" "<<c<<endl;
		
		if(a==aa&&b==bb&&c==cc){
			cout<<-1<<endl;
			return 0;
		}
	}
	
	cout<<cnt<<endl;
	return 0;
}