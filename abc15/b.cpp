#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	
	double sum = 0;
	double avesum = 0;
	
	for(int i = 0;i<n;i++){
		cin >> a[i];
		if(a[i]!=0){
			sum++;
			avesum += a[i];
		}
	}
	
	double ansd = avesum/sum;
	int ansi = avesum/sum;
	
	//cout << ansd<<endl;
	
	if(ansd>ansi)ansd=ansi+1;
	
	cout << ansd << endl;
	
	return 0;
}