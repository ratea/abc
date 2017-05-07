#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int r,c;
	int sy,sx;
	int gy,gx;
	cin >> r>> c;
	cin >> sy>>sx;
	cin >> gy>>gx;
	
	sy--;
	sx--;
	gy--;
	gx--;
	
	vector<string> yx(r);
	for(int i = 0;i<r;i++){
		cin >> yx[i];
	}
	
	queue<int> x;
	queue<int> y;
	queue<int> ans;
	
	x.push (sx);
	y.push (sy);
	ans.push (0);
	
	while(1){
		
		int ansp = ans.front();
		int xp = x.front();
		int yp = y.front();
		ans.pop();
		x.pop();
		y.pop();
		
		//cout << xp<<" "<<yp<<" "<<ansp<<" "<<yx[yp][xp]<<endl;
		
		yx[yp][xp]='#';
		
		if(xp==gx&&yp==gy){
			cout << ansp << endl;
			break;
		}
		if(yx[yp-1][xp]=='.'){
			x.push (xp);
			y.push (yp-1);
			ans.push (ansp+1);
			yx[yp-1][xp]='#';
		}
		if(yx[yp+1][xp]=='.'){
			x.push (xp);
			y.push (yp+1);
			ans.push (ansp+1);
			yx[yp+1][xp]='#';
		}
		if(yx[yp][xp-1]=='.'){
			x.push (xp-1);
			y.push (yp);
			ans.push (ansp+1);
			yx[yp][xp-1]='#';
		}
		if(yx[yp][xp+1]=='.'){
			x.push (xp+1);
			y.push (yp);
			ans.push (ansp+1);
			yx[yp][xp+1]='#';
		}
		
	}
	
	return 0;
}