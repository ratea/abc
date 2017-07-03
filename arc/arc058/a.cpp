#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(10,1);
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		a[x]=0;
	}
	
	vector<int> cuse(10-k);
	
	
	int j=0;
	for(int i=0;i<10;i++){
		if(a[i]==1){
			cuse[j]=i;
			j++;
		}
	}
	
	