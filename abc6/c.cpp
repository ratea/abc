#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	
	int gk = 1;
	if(m%2==0)gk = 0;
	
	for(int i = n;i>=0;i--){
		//cout << i<<endl;
		for(int j = gk;j <= n-i;j+=2){
			//cout << j<<endl;
			int k = n-i-j;
			if((i*4)+(j*3)+(k*2)==m){
				cout << k <<" "<< j <<" "<< i << endl;
				return 0;
			}
		}
	}
	
	cout << "-1"<<" "<<"-1"<<" "<<"-1"<<endl;
	
	return 0;
}