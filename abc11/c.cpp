#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int n;
	vector<int> m(3);
	cin >> n;
	cin >> m[0];
	cin >> m[1];
	cin >> m[2];
	
	sort( m.begin(),m.end(),greater<int>() );
	
	if(n==m[0]||n==m[1]||n==m[2]){
		cout << "NO" << endl;
		return 0;
	}
	
	if(m[0]-m[2]==2&&m[2]<n){
		cout << "NO" << endl;
		return 0;
	}
	
	int sum = 0;
	
	if(m[0]<n){
		if((n-m[0])%3==0){
			sum+=(n-m[0])/3;
		}else{
			sum+=(n-m[0])/3+1;
		}
	}
	
	if(m[0]<n){
		if((m[0]-m[1])%3==0){
			sum+=(m[0]-m[1])/3;
		}else{
			sum+=(m[0]-m[1])/3+1;
		}
	}
	if(m[1]<n){
		if((m[1]-m[2])%3==0){
			sum+=(m[1]-m[2])/3+1;
		}else{
			sum+=(m[1]-m[2])/3;
		}
	}
	
	if(m[2]%3==0){
			sum+=m[2]/3;
		}else{
			sum+=m[2]/3+1;
		}
	
	if(n-m[0]==1)sum--;
	if(m[0]-m[1]==1)sum--;
	if(m[1]-m[2]==1)sum--;
	
	//cout << sum << endl;
	
	
	if(sum<=100){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}