#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> h(n);
    rep(i,n) cin>>h[i];
    int cnt=1;
    rep3(i,1,n){
        bool jug=true;
        rep(j,i){
            (jug&=h[j]<=h[i]);

        }
        if(jug) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}