#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
 
int main(){
	long long int n;
	cin>>n;
	vector<long long int> a(n);
	
	long long int sum=0;
	
	for(long long int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	
	long long int b=0;
	long long int c=sum;
	
	long long int ans=1e10+7;
	
	for(long long int i=0;i<n-1;i++){
		b+=a[i];
		c-=a[i];
		long long int ans2=abs(b-c);
		ans=min(ans,ans2);
		//cout<<b<<" "<<c<<" "<<ans<<endl;
	}
	
	cout<<ans<<endl;
	
	return 0;
}