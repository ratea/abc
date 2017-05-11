#include<iostream>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s >> n;
	
	for(int i = 0;i<n;i++){
		string tmp;
		int a,b;
		cin >> a>> b;
		a--;
		b--;
		tmp[0]=s[a];
		s[a]=s[b];
		s[b]=tmp[0];
		for(int j = 0;;j++){
			if(b-a>1){
				a++;
				b--;
				tmp[0]=s[a];
				s[a]=s[b];
				s[b]=tmp[0];
			}else{
				break;
			}
		}
	}
	
	cout << s << endl;
	
	return 0;
}