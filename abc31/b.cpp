#include<iostream>
using namespace std;

int main(){
	int l,h,n;
	cin>>l>>h>>n;
	
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		if(a>h){
			cout<<-1<<endl;
		}else if(a<l){
			cout<<l-a<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	
	return 0;
}