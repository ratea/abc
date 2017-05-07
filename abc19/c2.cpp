#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> b;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		while(a[i]%2==0&&a[i]>1)a[i]/=2;
		b.insert(a[i]);
	}
	
	cout << b.size() << endl;
	
	return 0;
}