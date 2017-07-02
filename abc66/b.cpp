#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.size();
	if(n%2!=0){
		n-=1;
	}else{
		n-=2;
	}
	
	for(int i=n;i>=0;i=i-2){
		int ans=1;
		for(int j=0;j<i/2;j++){
			if(s[j]!=s[j+i/2])ans=0;
		}
		if(ans==1){
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}