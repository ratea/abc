#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
	int n;
	cin>>n;
	vector<int> s(n);
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	sort(s.begin(),s.end());
	
	if(sum%10==0){
		for(int i=0;i<n;i++){
			if(s[i]%10!=0){
				sum-=s[i];
				break;
			}
		}
	}
	
	if(sum%10==0)sum=0;
	
	cout<<sum<<endl;
	
	return 0;
}