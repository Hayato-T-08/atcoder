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
    vector<int> a(n+1);
    rep1(i,n){
        cin >> a[i];
    }
    int ans = a[1];
    rep3(i,2,n+1){
        ans ^= a[i];
    } 

    if(ans == 0){
        cout << "Second" << endl;
    }else{
        cout << "First" << endl;
    }
    return 0;
}