#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t,b,u,d,l,r;
	cin>>t>>b>>u>>d>>l>>r;
	int n;
	cin>>n;
	vector<int> p(n);
	for(int i = 0;i<n;i++){
		cin>>p[i];
	}
	int ans=0;
	int sta=t;
	
	for(int i = 0;i<n;i++){
		if(sta!=p[i]){
			if((sta==t&&p[i]==b)||(sta==u&&p[i]==d)||(sta==l&&p[i]==r)||(sta==b&&p[i]==t)||(sta==d&&p[i]==u)||(sta==r&&p[i]==l)){
				ans+=2;
			}else{
				ans+=1;
			}
		}
		sta=p[i];
	}
	cout<<ans<<endl;
	return 0;
}