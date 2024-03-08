#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(all(a));
    int q;
    cin>>q;
    rep(i,q){
        int x;
        cin>>x;
        auto it = lower_bound(all(a),x);
        cout << distance(a.begin(), it) << endl;
    }
}