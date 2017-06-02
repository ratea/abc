#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<queue>

int main(){
	long long int n;
	cin>>n;
	priority_queue<long long int , vector<long long int>, greater<long long int> > a;
	vector<long long int> b(n+1);
	priority_queue<long long int> c;
	long long int lsum=0;
	long long int rsum=0;
	for(long long int i = 0;i<n;i++){
		long long int tmp;
		cin>>tmp;
		lsum+=tmp;
		a.push(tmp);
	}
	for(long long int i = 0;i<n;i++){
		cin>>b[i];
	}
	for(long long int i = 0;i<n;i++){
		long long int tmp;
		cin>>tmp;
		rsum+=tmp;
		c.push(tmp);
	}
	vector<long long int> lall(n+1);
	vector<long long int> rall(n+1);
	lall[0]=lsum;
	rall[n]=rsum;
	for(long long int i = 1;i<n+1;i++){
		a.push(b[i-1]);
		lsum+=b[i-1];
		lsum-=a.top();
		a.pop();
		lall[i]=lsum;
		
		c.push(b[n-i]);
		rsum+=b[n-i];
		rsum-=c.top();
		c.pop();
		rall[n-i]=rsum;
	}
	
	long long int ans = -1000000000*n;
	for(long long int i = 0;i<n+1;i++){
		ans=max(ans,lall[i]-rall[i]);
	}
	cout<<ans<<endl;
	return 0;
}