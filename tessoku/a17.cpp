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
    int n;
    cin >> n;
    vector<int> a(n, 0),b(n,0),dp(n,0);

    rep3(i,1,n){
        cin >> a[i];
    }

    rep3(i,2,n){
        cin >> b[i];
    }

    dp[1] = a[1];

    rep3(i,2,n){
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);
    }

    vector<int> c;

    int i = n-1;
    while(i > 0 ){
        c.push_back(i);
        if(dp[i-1] + a[i] == dp[i]){
            i--;
        }
        else{
            i -= 2;
        }
    }

    reverse(c.begin(),c.end());

    cout << c.size() + 1 << endl;
    cout << 1 << " ";
    rep(i,c.size()){
        cout << c[i] + 1 << " ";
    }

    return 0;
}