#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    cin>>n;
    vector<pair<int,string>> ts(n);

    rep(i,n){
        string s;
        int t;
        cin>>s>>t;
        ts[i]=make_pair(t,s);
    }

    sort(all(ts));
    cout<<ts[n-2].second<<endl;
}