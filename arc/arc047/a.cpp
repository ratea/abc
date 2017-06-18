#include<iostream>
using namespace std;

int main(){
	int n,l;
	cin>>n>>l;
	string s;
	cin>>s;
	
	int st=1;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='+'){
			st++;
			if(st>l){
				st=1;
				ans++;
			}
		}else{
			st--;
		}
	}
	cout<<ans<<endl;
	return 0;
}