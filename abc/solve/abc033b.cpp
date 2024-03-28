#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<pair<string,ll>> sp(n);
    rep(i,n) cin>>sp[i].first>>sp[i].second;

    ll sum=0;
    rep(i,n){
        sum+=sp[i].second;
    }

    string s = "atcoder";
    rep(i,n){
        if(sp[i].second*2>=sum+1){
            s=sp[i].first;
        }
    }

    cout<<s<<endl;
}