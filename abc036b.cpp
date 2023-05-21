#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<vector<char>> s(n,vector<char>(n)),s2(n,vector<char>(n));
    rep(i,n)rep(j,n) cin>>s[i][j];

    rep(i,n){
        rep(j,n){
            s2[i][j]=s[n-1-j][i];
        }
    }
    cout<<endl;
    rep(i,n){
        rep(j,n){
            cout<<s2[i][j];
        }
        cout<<endl;
    }
}