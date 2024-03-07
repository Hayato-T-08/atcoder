#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int d,n;
    cin>>d>>n;
    vector<int> t(d+1,0);
    vector<int> sum(d+1,0);
    rep3(i,1,n+1){
        int l,r;
        cin>>l>>r;
        t[l]++;
        t[r+1]--;
    }

    rep3(i,1,d+1){
        sum[i] = sum[i-1] + t[i];
    }

    rep3(i,1,d+1){
        cout<<sum[i]<<endl;
    }
}