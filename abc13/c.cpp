#include<iostream>
using namespace std;

int main(){
	int n,h;
	int a,b,c,d,e;
	cin >> n >> h;
	cin >> a >> b >> c >> d >> e;
	
	
	
	int ans=n*a;
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-i;j++){
			if((h+(i*b)+(j*d))-((n-(i+j))*e)>0){
				ans = min(ans,(i*a)+(j*c));
			}
		}
	}
		
	cout << ans << endl;
	
	return 0;
}