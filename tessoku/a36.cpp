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
    int n,k;
    cin>> n >> k;
    bool flag = true;
    if (k < 2*n -2) flag = false;
    if (k % 2 == 1) flag = false;

    if (flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}