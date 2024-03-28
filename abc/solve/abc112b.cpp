#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,t;
    cin>>n>>t;
    vector<pair<int,int>> ct(n);
    rep(i,n) cin>>ct[i].first>>ct[i].second;
    vector<int> at;
    rep(i,n){
        if(ct[i].second <=t){
            at.push_back(ct[i].first);
        }
    }
    if(at.empty()) {
        cout<<"TLE"<<endl;
        return 0;
    }else{
        sort(all(at));
        cout<<at[0]<<endl;
        return 0;
    }

}