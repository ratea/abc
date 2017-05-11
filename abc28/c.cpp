#include<iostream>
using namespace std;
#include<algorithm>
#include<functional>
#include<vector>
#include<set>

int main(){
	vector<int> a(5);
	set<int, greater<int> > ans;
	
	for(int i =0;i<5;i++){
		cin>>a[i];
	}
	
	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			for(int k = 0;k<5;k++){
				if(i!=j&&i!=k&&j!=k){
					ans.insert(a[i]+a[j]+a[k]);
				}
			}
		}
	}
	
	//sort( ans.begin(),ans.end(),greater<int>() );
	set<int>::iterator it = ans.begin();
	it++;
	it++;
	cout << *it <<endl;
	
	return 0;
}