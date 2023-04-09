#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    set<int> price;
    sort(all(a));

    for(int i=0;i<(1<<n);i++){
        int val=0;
        for(int j=0;j<n;j++){
            if(i&(i<<j)){
                val+=a[i]
            }
        }
    }
}