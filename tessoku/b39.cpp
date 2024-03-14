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
    int n,d;
    cin >> n >> d;
    vector<bool> used(n+1,false);
    vector<int> x(n+1),y(n+1);

    rep1(i,n){
        cin >> x[i] >> y[i];
    }

    ll ans = 0;

    rep1(i,d){            
        int max = 0;
        int max_id = -1;
        bool max_exist = false;
        rep1(j,n){

            if(x[j] <= i && y[j] > max && !used[j]){
                max = y[j];
                max_exist = true;
                max_id = j;
            }

        }
            
        if(max_exist){
            used[max_id] = true;
            ans += max;
        }
    }

    cout << ans << endl;
    return 0;
}