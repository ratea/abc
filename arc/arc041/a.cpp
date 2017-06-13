#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int ans;
	if(b>=c){
		ans=a+c;
	}else{
		ans=a+b-c+b;
	}
	cout<<ans<<endl;
	return 0;
}