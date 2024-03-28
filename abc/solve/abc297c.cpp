#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> s(h,vector<char>(w));
    rep(i,h)rep(j,w) cin>>s[i][j];

    rep(i,h){
        rep(j,w-1){
            if(s[i][j]=='T' and s[i][j+1]=='T'){
                s[i][j]='P';
                s[i][j+1]='C';
            }
        }
    }

    rep(i,h){
        rep(j,w) cout<<s[i][j];
        cout<<endl;
    }
}