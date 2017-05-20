#include <iostream>
using namespace std;
#include <vector>

int main(void){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    string s;
    cin>> s;
    int j=0;
    int k=0;
    for(int i = 0; i<n;i++){
        if(s[i]=='L'){
            a[j]=i+1;
            j++;
        }else if(s[i]=='R'){
            b[k]=i+1;
            k++;
        }
    }

    for(int i = j;j>1;j--){
        cout<<a[j-1]<<" ";
    }
    if(j!=0)cout<<a[j-1];
    if(k!=0&&j!=0)cout<<" ";

    for(int i =0;i<k-1;i++){
        cout<<b[i]<<" ";
    }
    if(k!=0){
      cout<<b[k-1]<<endl;
    }else{
      cout<<endl;
    }
    return 0;
}
