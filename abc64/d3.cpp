#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    string str,cstr;
    cin >> str;
    cstr=str;
    for(int i=0;str.length()!=0;){
        if(str[i]=='('&&str[i+1]==')'){
            str.erase(str.begin()+i,str.begin()+i+2);
            i=0;
        }else if(str[i]==')'){
            str.erase(str.begin()+i,str.begin()+i+1);
            cstr="("+cstr;
            i=0;
        }else if(str[i]=='('&&i==str.length()-1){
            str.erase(str.begin()+i,str.begin()+i+1);
            cstr=cstr+")";
            i=0;
        }else{i++;}
    }
    cout << cstr <<"\n";
    return 0;
}