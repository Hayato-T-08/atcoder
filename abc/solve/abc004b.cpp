#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<vector<char>> c(4,vector<char>(4)),c1(4,vector<char>(4));
    rep(i,4)rep(j,4) cin>>c[i][j];
    rep(i,4)rep(j,4){
        c1[i][j]=c[3-i][3-j];
    }

    rep(i,4){
        rep(j,4){
            cout<<c1[i][j]<<" ";
        }
        cout<<endl;
    }
}