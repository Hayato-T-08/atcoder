#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))

int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> p(n);
    rep(i,n) cin>>p[i].first>>p[i].second;
    int min_idx=0;
    rep(i,n){
        if(p[min_idx].second>p[i].second){
            min_idx = i;
        }
    }

    int cnt = 0;
    int i = min_idx;
    while (cnt<n){
        cout<<p[i].first<<endl;
        i++;
        i%=n;
        cnt++;
    }

    

}
