#define _USE_MATH_DEFINES
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
    deque<int> dq;
    int n,q;
    cin >> n >> q;
    rep(i,n){
        int a;
        cin >> a;
        dq.push_back(a);
    }
    rep(i,q){
        int t,x,y;
        cin >> t >> x >> y;
        if(t == 1){
            swap(dq[x-1],dq[y-1]);
        }else if(t == 2){
            dq.push_front(dq.back());
            dq.pop_back();
        }else{
            cout << dq[x-1] << endl;
        }
    }
}