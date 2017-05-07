#include<iostream>
using namespace std;

#include<vector>
#include<set>

int main(){
	int n;
	int a,b;
	int k;
	cin >> n >> a >> b >> k;
	set<int> p;
	for(int i = 0;i<k;i++){
		int c;
		cin >> c;
		p.insert(c);
	}
	p.insert(a);
	p.insert(b);
	
	if(k+2==p.size()){
		cout << "YES"<<endl;
	}else{
		cout << "NO" <<endl;
	}
	
	return 0;
}