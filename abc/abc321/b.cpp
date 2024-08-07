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
    int n,x;
    cin >> n >> x;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    sort(a.begin(),a.end());
    int min = a[0];
    int max = a[n-2];
    int sum = accumulate(a.begin(),a.end(),0);
    sum-= (min + max);
    rep(i,101){
        int val = sum;
        if(i < min){
            val += min;
        }else if(i > max){
            val += max;
        }else{
            val += i;
        }
        if(val >= x){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}