#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> grid(h,vector<char>(w));
    rep(i,h)rep(j,w){
        cin>>grid[i][j];
    }

    vector<bool> row(h,false),col(w,false);
    
    rep(i,h){
        bool jug=true;
        rep(j,w){
            jug&=grid[i][j]=='.';
        }
        if(jug) row[i]=true;
    }

    rep(i,w){
        bool jug=true;
        rep(j,h){
            jug&=grid[j][i]=='.';
        }
        if(jug) col[i]=true;
    }

    int new_row=0,new_col=0;

    rep(i,h){
        if(!row[i]) new_row++;
    }

    rep(i,w){
        if(!col[i]) new_col++;
    }


    
    rep(i,h){
        if(row[i]) continue;
        rep(j,w){
            if(col[j]) continue;
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}