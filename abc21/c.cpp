#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int n,a,b,m;
	cin >> n >> a >> b >> m;
	vector<int> x(m);
	vector<int> y(m);
	
	for(int i = 0;i<m;i++){
		cin >> x[i]>>y[i];
	}
	
	queue<int> np;
	vector<int> rootl(n+1,201);//ç≈íZãóó£
	vector<int> roots(n+1,0);//ÇΩÇ«ÇËíÖÇØÇÈìπÇÃí ÇË
	roots[a]=1;
	rootl[a]=0;
	
	np.push(a);
	
	while(1){
		int nnp = np.front();
		np.pop();
		for(int i = 0;i<m;i++){
			if(nnp==x[i]){
				if(rootl[y[i]]==rootl[nnp]+1){
					roots[y[i]]+=roots[nnp];
					roots[y[i]]%=1000000007;
				}else if(rootl[y[i]]>rootl[nnp]+1){
					rootl[y[i]]=rootl[nnp]+1;
					roots[y[i]]=roots[nnp];
					np.push(y[i]);
				}
			}else if(nnp==y[i]){
				if(rootl[x[i]]==rootl[nnp]+1){
					roots[x[i]]+=roots[nnp];
					roots[x[i]]%=1000000007;
				}else if(rootl[x[i]]>rootl[nnp]+1){
					rootl[x[i]]=rootl[nnp]+1;
					roots[x[i]]=roots[nnp];
					np.push(x[i]);
				}
			}
		}
		if(nnp==b)break;
	}
	
	cout << roots[b] << endl;
	
	return 0;
}