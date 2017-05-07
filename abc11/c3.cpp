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
	
	
	if(m[0]-m[1]==2&&m[1]-m[2]==2){
		sum++;
	}else{
	for(int i = n;i>0;i-=3){
		if(i==m[0]||i==m[1]||i==m[2]){
			sum++;
			i--;
		}
	}
	}
	
	if((n/3)+sum<=100){
		cout << "YES"<<endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}