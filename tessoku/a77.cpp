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

bool check(int x, vector<int> A, int n, int l,int k){
    int cnt = 0,last = 0;
    rep1(i,n){
        if(A[i] - last >= x && l - A[i] >= x){
            cnt++;
            last = A[i];
        }
    }
    if(cnt >= k) return true;
    else return false;
}

int main() {
    int n,l,k;
    cin >> n >> l >> k;
    vector<int> A(n+1);
    rep1(i,n) cin >> A[i];
    ll left = 1;
    ll right = 1e9;
    while(right - left > 1){
        ll mid = left + (right - left) / 2;
        if(check(mid,A,n,l,k)) left = mid;
        else right = mid;
    }

    cout << left << endl;
    return 0;
}