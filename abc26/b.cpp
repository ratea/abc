#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<double> r(n);
	for(int i = 0;i<n;i++){
		cin >> r[i];
	}
	sort(r.begin(),r.end(),greater<int>());
	
	double ans = 0;
	bool sta = 1;
	
	for(int i = 0;i<n;i++){
		if(sta){
			ans+=r[i]*r[i]*M_PI;
			sta=0;
		}else{
			ans-=r[i]*r[i]*M_PI;
			sta=1;
		}
	}
	
	cout << fixed << setprecision(7) << ans << endl;
	return 0;
}