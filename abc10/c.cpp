#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int bx,by,ax,ay,t,v;
	cin >> bx >> by >> ax >> ay >> t >> v;
	int n;
	cin >> n;
	
	vector< vector<int> > a( 2, vector<int>(n) );
	
	for(int i = 0;i<n;i++){
		cin >> a[0][i] >> a[1][i];
	}
	
	vector<double> ans(n);
	for(int i = 0;i<n;i++){
		ans[i] = hypot((bx-a[0][i]),(by-a[1][i]))+hypot((ax-a[0][i]),(ay-a[1][i]));
	}
	
	sort(ans.begin(),ans.end() );
	
	/*
	for(int i = 0;i<n;i++){
		cout << ans[i] << endl;
	}
	*/
	
	if(ans[0]<=t*v){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}