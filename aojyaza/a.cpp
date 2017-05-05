#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n;
  cin>>n;
  vector< vector<int> > xy( 21,vector<int>(21,0) );

  for(int i = 0;i<n;i++){
    int x,y;
    cin>>x>>y;
    xy[x][y]=1;
  }

  int m;
  cin>>m;

  vector<char> d(m);
  vector<int> l(m);

  for(int i = 0;i<m;i++){
    cin>>d[i]>>l[i];
  }

  xy[10][10]=0;

  int x,y;
  x=10;
  y=10;
  for(int i =0;i<m;i++){
    for(int j = 0;j<l[i];j++){
      if(d[i]=='N')y++;
      if(d[i]=='E')x++;
      if(d[i]=='S')y--;
      if(d[i]=='W')x--;
      //cout<<x<<" "<<y<<endl;
      xy[x][y]=0;
    }
  }

  for(int i =0;i<21;i++){
    for(int j =0;j<21;j++){
      if(xy[i][j]==1){
        cout<<"No"<<endl;
        return 0;
      }
    }
  }

  cout<<"Yes"<<endl;
  return 0;
}
