#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	vector<long long int> y(n+1);
	
	for(long long int i=1;i<n+1;i++)cin>>y[i];
	
	set<long long int> st;
	
	for(long long int i=1;i<n;i++){
		st.insert(y[i]-y[i+1]);
	}
	
	if(2<=st.size()&&st.size()<=3){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}