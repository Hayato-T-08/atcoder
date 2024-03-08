#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    int a,b;
    a = n/2;
    b = n - a;

    vector<ll> c(a), d(b);

    rep(i,a){
        cin >> c[i];
    }

    rep(i,b){
        cin >> d[i];
    }

    vector<ll> p(1<<a, 0), q(1<<b, 0);

    rep(i,1<<a){
        rep(j,a){
            if(i & (1<<j)){
                p[i] += c[j];
            }
        }
    }

    rep(i,1<<b){
        rep(j,b){
            if(i & (1<<j)){
                q[i] += d[j];
            }
        }
    }

    sort(all(p));
    sort(all(q));

    rep(i, 1<<a){
        ll x = k - p[i];
        if(binary_search(all(q), x)){
            cout << "Yes" << endl;
            return 0;
        }
    }


    cout << "No" << endl;
}