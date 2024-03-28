#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = modint998244353;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int q;
    cin>>q;
    string s="1";
    rep(i,q){
        int jug;
        cin>>jug;
        if(jug==1){
            char x;
            cin>>x;
            s+=x;

        }else if(jug==2){
            s.erase(0,1);
        }else{
            ll a=stoll(s);
            a%=998244353;
            if(a<0) a+=998244353;
            cout<<a<<endl;
        }
    }
}