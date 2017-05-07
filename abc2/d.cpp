#include<iostream>
using namespace std;

#include <algorithm>
#include <functional>

int main(){
	int a,b;
	cin >> a >> b;
	int n[13] = {0};
	
	for(int i = 0;i<b;i++){
		int c,d;
		cin >> c >> d;
		n[c-1]++;
		n[d-1]++;
	}
	
	sort(n,n + a, greater<int>());
	
	if(b==0){
		cout << 1<<endl;
	}else{
		for(int i = 0;i<a;i++){
			if(n[i]==i){
				cout << (i+1) <<endl;
				break;
			}
			
			if(i==a-1){
				cout << 2<<endl;
			}
		}
	}
	
	return 0;
}