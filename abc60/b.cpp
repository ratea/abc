#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	for(int i = 1;i<500;i++){
		if((a*i)%b==c){
			cout << "YES"<<endl;
			return 0;
		}
	}
	
	cout << "NO"<<endl;
	return 0;
}