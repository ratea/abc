#include<iostream>
using namespace std;
#include<vector>

int main(){
	int l,r;
	cin>>l>>r;
	vector<int> ls(l);
	vector<int> rs(r);
	
	for(int i=0;i<l;i++){
		cin>>ls[i];
	}
	
	for(int i=0;i<r;i++){
		cin>>rs[i];
	}
	
	int ans=0;
	
	for(int i=0;i<l;i++){
		for(int j=0;j<r;j++){
			if(ls[i]==rs[j]){
				ans++;
				rs[j]=-1;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}