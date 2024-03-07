#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,q;
    cin >> n >>q;
    vector<int> a(n + 1,0);
    ll sum = 0;
    for(int i=1;i<=n;i++){
        int b;
        cin >> b;
        sum += b;
        a[i] = sum;
    }
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout<< a[r] - a[l-1] <<endl;
    }



}