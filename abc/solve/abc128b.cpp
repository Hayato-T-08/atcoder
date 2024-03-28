#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<tuple<string,int,int>> rev(n);
    rep(i,n) {
        string s;
        int x;
        cin>>s>>x;
        x=-1*x;
        rev[i]=make_tuple(s,x,i+1);
    }
    sort(all(rev));
    rep(i,n) cout<<get<2>(rev[i])<<endl;;



}