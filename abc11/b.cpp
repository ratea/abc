#include<iostream>
using namespace std;

int main(){
	string n;
	cin >> n;
	if(n[0]>96)n[0]-=32;
	
	for(int i = 1;i<n.size();i++){
		if(n[i]<91)n[i]+=32;
	}
	
	cout << n << endl;
}