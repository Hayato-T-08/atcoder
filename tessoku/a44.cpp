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
    ll n,q;
    cin >> n >> q;
    vector<int> a(n+1);

    rep1(i,n){
        a[i] = i;
    }
    bool is_reverse = false;
    rep1(i,q){
        ll query;
        cin>>query;
        
        if(query == 1){
            ll x,y;
            cin >> x >> y;
            if(!is_reverse){
                a[x] = y;
            }else{
                a[n-x+1] = y;
            }
        }else if(query == 2){
            is_reverse = !is_reverse;
        }else{
            ll x;
            cin >> x;
            if(!is_reverse){
                cout<<a[x]<<endl;
            }else{
                cout<<a[n-x+1]<<endl;
            }
        }

    }
    return 0;
}