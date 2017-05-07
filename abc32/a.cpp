#include<iostream>
using namespace std;

int main(){
	int a,b,n;
	
	cin>>a>>b>>n;
	int a2=a;
	int b2=b;
	
	if(a<b){
		int tmp;
		tmp=a;
		a=b;
		b=tmp;
	}
	
	while(1){
		if(a%b!=0){
			a%=b;
			int tmp;
			tmp=a;
			a=b;
			b=tmp;
		}else{
			break;
		}
	}
	
	int ans = a2*b2/b;
	int tmp=ans;
	while(ans<n)ans+=tmp;
	
	cout<<ans<<endl;
	
	
	
	return 0;
}