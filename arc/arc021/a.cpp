#include<iostream>
using namespace std;
#include<vector>

int main(){
	vector<vector<int> > a(4,vector<int>(4) );
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i+1<4){
				if(a[i][j]==a[i+1][j]){
					cout<<"CONTINUE"<<endl;
					return 0;
				}
			}
			if(j+1<4){
				if(a[i][j]==a[i][j+1]){
					cout<<"CONTINUE"<<endl;
					return 0;
				}
			}
		}
	}
	
	cout<<"GAMEOVER"<<endl;
	return 0;
}