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
    rep(i,n) cin>>a[i];

    int q;
    cin>>q;
    vector<pair<int,int>> lr(q);
    rep(i,q){
        cin>>lr[i].first>>lr[i].second;
    }

    vector<int> sum(n,0);
    sum[0]=a[0];
    rep3(i,1,n){
        sum[i]=sum[i-1]+a[i];
    }

    rep(i,q){
        int all = lr[i].second-lr[i].first+1;
        int atari = sum[lr[i].second-1]-sum[lr[i].first-2];
        int hazure = all-atari;
        if(atari==hazure) cout<<"draw"<<endl;
        else if(atari>hazure) cout<<"win"<<endl;
        else cout<<"lose"<<endl;
    }

}