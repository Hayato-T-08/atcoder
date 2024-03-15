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
    ll x,y;
    cin >> x >> y;
    if(x == 1 && y == 1){
        cout<<0<<endl;
        return 0;
    }
    vector<P> e;
    while(x >= 2 || y >= 2){
        e.push_back({x,y});
        if(x > y){
            x -= y;
        }else{
            y -= x;
        }
        
    }

    cout<<  e.size() << endl;
    for(int i = e.size()-1; i >= 0; i--){
        cout << e[i].first << " " << e[i].second << endl;
    }
    return 0;
}