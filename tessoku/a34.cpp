#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int main() {
    int n,x,y;
    cin>> n >> x >> y;
    vector<int> a(n+1);
    rep1(i,n){
        cin >> a[i];
    }
    vector<int> grundy(100009);
    rep3(i,0,100001){
        vector<bool> transit = {false,false,false};
        if(i>=x) transit[grundy[i-x]] = true;
        if(i>=y) transit[grundy[i-y]] = true;
        if(transit[0]==false){
            grundy[i] = 0;
        }
        else if(transit[1]==false){
            grundy[i] = 1;
        }else{
            grundy[i] = 2;
        }
    }

    int sum = 0;
    rep1(i,n){
        sum ^= grundy[a[i]];
    }

    if(sum == 0) cout << "Second" << endl;
    else cout << "First" << endl;
}