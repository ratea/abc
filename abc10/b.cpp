#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> b(n);
	int sum=0;
	
	for(int i = 0;i<n;i++){
		cin >> b[i];
		if(b[i]%6==2){
			sum+=1;
		}
		if(b[i]%6==4){
			sum+=1;
		}
		if(b[i]%6==5){
			sum+=2;
		}
		if(b[i]%6==0){
			sum+=3;
		}
	}
	
	cout << sum << endl;
	return 0;
}
	