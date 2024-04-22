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
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    vector<vector<int>> a(9, vector<int>(9));   
    bool flag1 = true, flag2 = true, flag3 = true;
    rep(i,9){
        rep(j,9){
            cin >> a.at(i).at(j);
        }
    }

    rep(i,9){
        map<int,int> mp;
        rep(j,9){
            mp[a[i][j]]++;
            if(mp[a[i][j]] > 1){
                flag1 = false;
            }
        }
    }

    rep(j,9){
        map<int,int> mp;
        rep(i,9){
            mp[a[i][j]]++;
            if(mp[a[i][j]] > 1){
                flag2 = false;
            }
        }
    }

    rep(i,3){
        rep(j,3){
            map<int,int> mp;
            rep(k,3){
                rep(l,3){
                    mp[a[i*3+k][j*3+l]]++;
                    if(mp[a[i*3+k][j*3+l]] > 1){
                        flag3 = false;
                    }
                }
            }
        }
    }

    if(flag1 && flag2 && flag3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}