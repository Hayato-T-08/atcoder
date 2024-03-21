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
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;

int main() {
    int q;
    cin >> q;
    deque<int> deq;
    rep(i,q){
        int t,x;
        cin >> t >> x;
        if(t == 1) deq.push_front(x);
        else if(t == 2) deq.push_back(x);
        else cout << deq[x-1] << endl;
    }
    return 0;
}