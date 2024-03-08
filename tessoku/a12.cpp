#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    ll left = 1;
    ll right = 1e9;

    while(left < right){
        ll mid = (left + right) / 2;
        ll sum = 0;
        rep(i,n){
            sum += floor(mid/a[i]);
        }
        if(sum < k){
            left = mid + 1;
        }else if(sum >= k){
            right = mid;
        }
    }

    cout << left << endl;
}