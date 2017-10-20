#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	long long int ans=-n;
	set<long long int> st;
	
	for(int i=1;i<1e5+1;i++){
		if(n%i==0){
			st.insert(i);
			st.insert(n/i);
		}
	}
	
	for(auto el:st){
		ans+=el;
	}
	
	//cout<<ans<<endl;
	
	if(ans<n){
		cout<<"Deficient"<<endl;
	}else if(ans>n){
		cout<<"Abundant"<<endl;
	}else{
		cout<<"Perfect"<<endl;
	}
	
	
	
	return 0;
}