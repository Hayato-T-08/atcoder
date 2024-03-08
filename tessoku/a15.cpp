#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    vector<int> b(n);
    copy(all(a),b.begin());
    sort(all(b));
    b.erase(unique(all(b)),b.end());

    map<int, int> m;

    rep(i, b.size()){
        m[b[i]] = i+1;
    }

    rep(i,n){
        cout << m[a[i]] <<" ";
    }
    cout << endl;
}