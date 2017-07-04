#include<iostream>
using namespace std;
#include<map>
#include<vector>

int main(){
	string s="LRVLVEQFQXIFXDLXQALFQIXNIQ VLCLQVHOLVXUQSVLXEQNVLSQXVXHLQVITXLVQEKXXXVUQXLVLDXQALXXSXAXRXI FAVQRFLIQGLQXAFTQOXLUQFXGLOQFLZQFXAQQLIQFXMQALQFQSQULF! VQZVVFXELVQNXXMVFVQXLONVXVXQFLVSXQVXELFVXQIKAXVXVQIFXLQSHXVQIXQTA QFVLSLVANQVFKVVLQASLFXVXHXANFLILHAFX QDIVXSVFQCVLOQ VGFEVVNLQQTVFEIDLQFORAFQYLAFQKIFWO FVLLPLREQFSLLFQENTF!VXL VTXAXIXLFKQAIFTLLQOFVQUXJFQLVITFSULVFXXNI LUQFKEXLFTQXSXLUFQXKEFXLDQXEF OLFWLXATQFLQASQHFLQILFSQVQHXVIXLMQLASUL XTOLUFQSHVIFXLVTSXQXVFQLVUWQFVLXOVTFVOXQTFVLTFE FVFYXUVLVXUFXFVSQHXFVLXVFXQOFVXVUXQMVFLQVELQZFALSHXQFLIFTXQEF FGAFLNQFBQLAFLTTVQFFQELKQXUXVQDXFQAXVLQXFSFXVVQAFXVQXVIX!X";
	map<char,int> mp;
	
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	vector<int> rank(5,0);
	vector<char> nu(5);
	
	for(auto &el:mp)cout<<el.first<<" "<<el.second<<endl;
	
	for(auto &el:mp){
		if(rank[0]<el.second){
			rank[4]=rank[3];
			nu[4]=nu[3];
			rank[3]=rank[2];
			nu[3]=nu[2];
			rank[2]=rank[1];
			nu[2]=nu[1];
			rank[1]=rank[0];
			nu[1]=nu[0];
			rank[0]=el.second;
			nu[0]=el.first;
		}else if(rank[1]<el.second){
			rank[4]=rank[3];
			nu[4]=nu[3];
			rank[3]=rank[2];
			nu[3]=nu[2];
			rank[2]=rank[1];
			nu[2]=nu[1];
			rank[1]=el.second;
			nu[1]=el.first;
		}else if(rank[2]<el.second){
			rank[4]=rank[3];
			nu[4]=nu[3];
			rank[3]=rank[2];
			nu[3]=nu[2];
			rank[2]=el.second;
			nu[2]=el.first;
		}else if(rank[3]<el.second){
			rank[4]=rank[3];
			nu[4]=nu[3];
			rank[3]=el.second;
			nu[3]=el.first;
		}else if(rank[4]<el.second){
			rank[4]=el.second;
			nu[4]=el.first;
		}
	}
	
	for(int i=0;i<5;i++)cout<<nu[i]<<endl;
	
	for(int i=0;i<s.size();i++){
		if(s[i]!=nu[0]&&s[i]!=nu[1]&&s[i]!=nu[2]&&s[i]!=nu[3]&&s[i]!=nu[4])cout<<s[i];
	}
	cout<<endl;
	
	return 0;
}