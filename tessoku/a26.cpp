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

bool check(int x){
    rep3(i,2,sqrt(x)+1){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int q;
    cin>>q;
    vector<int> x(q);
    rep(i,q){
        cin>>x[i];
    }

    rep(i,q){
        if(check(x[i])){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}