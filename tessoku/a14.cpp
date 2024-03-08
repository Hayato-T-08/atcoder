#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n),c(n),d(n),q(n*n),p(n*n);

    rep(i,n){
        cin >> a[i];
    }

    rep(i,n){
        cin >> b[i];
    }
    
    rep(i,n){
        cin >> c[i];
    }

    rep(i,n){
        cin >> d[i];
    }

    rep(i,n){
        rep(j,n){
            p[i*(n) + j] = a[i] + b[j];
        }
    }

    rep(i,n){
        rep(j,n){
            q[i*(n) + j] = c[i] + d[j];
        }
    }

    sort(all(p));
    sort(all(q));

    rep(i,n*n){
        ll x = k-p[i];
        if(binary_search(all(q),x)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}