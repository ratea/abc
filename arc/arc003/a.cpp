#include<iostream>
using namespace std;
#include<vector>
#include <iomanip>

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	double sum=0;
	for(int i = 0;i<n;i++){
		if(s[i]=='A')sum+=4;
		if(s[i]=='B')sum+=3;
		if(s[i]=='C')sum+=2;
		if(s[i]=='D')sum+=1;
	}
	cout<< fixed << setprecision(10)<<sum/n<<endl;
	return 0;
}