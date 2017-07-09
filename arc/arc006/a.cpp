#include<iostream>
using namespace std;
#include<vector>

int main(){
	vector<char> s(6);
	for(int i=0;i<6;i++)cin>>s[i];
	char b;
	cin>>b;
	vector<char> l(6);
	for(int i=0;i<6;i++)cin>>l[i];
	
	int bo=0;
	int ans=0;
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(s[i]==l[j]){
				s[i]='x';
				ans++;
			}
		}
	}
	
	for(int j=0;j<6;j++){
		//cout<<l[j]<<b<<endl;
		if(l[j]==b)bo=1;
	}
	if(ans==6)cout<<1<<endl;
	if(ans==5&&bo==1)cout<<2<<endl;
	if(ans==5&&bo!=1)cout<<3<<endl;
	if(ans==4)cout<<4<<endl;
	if(ans==3)cout<<5<<endl;
	if(ans<3)cout<<0<<endl;
	return 0;
}