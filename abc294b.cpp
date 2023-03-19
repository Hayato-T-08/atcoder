#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<vector<char>> ans(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cin>>a[i][j];
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]==0) ans[i][j]='.';
            else{
                int s=char('A');
                char x=char(s+a[i][j]-1);
                ans[i][j]=x;
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }




}