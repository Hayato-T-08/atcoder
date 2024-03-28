#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<string> pic(h);
    vector<string> ans;
    rep(i,h){
        string s;
        cin>>s;
        rep(j,2) ans.push_back(s);
    }

    rep(i,h*2) cout<<ans[i]<<endl;
}