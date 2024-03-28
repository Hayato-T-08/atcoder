#include <bits/stdc++.h>
using namespace std;
int h,w;

int ans=0;
void dfs(int i,int j,set<int> num,vector<vector<int>> a){
  if(num.count(a[i][j])) return;
  num.insert(a[i][j]);
  if(i==h&&j==w){
    ans++;
    return;
  }
  if(i+1<=h) dfs(i+1,j,num,a);
  if(j+1<=w) dfs(i,j+1,num,a);
}
int main(){
  cin>>h>>w;
  vector<vector<int>> a(h+1,vector<int>(w+1));
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
        cin>>a[i][j];
      }
    }
    set<int> num;
    dfs(1,1,num,a);
    cout<<ans<<endl;
}