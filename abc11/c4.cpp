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
	
	int ans=0;
	
	for(int i = n;i>0;ans++){
		if((i-3)!=m[0]&&(i-3)!=m[1]&&(i-3)!=m[2]){
			i-=3;
		}else if((i-2)!=m[0]&&(i-2)!=m[1]&&(i-2)!=m[2]){
			i-=2;
		}else{
			i-=1;
		}
	}
	
	//cout << ans<<endl;
	
	if(ans<=100){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}