#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int GCD(int a, int b){
    while(a>=1 && b>=1)
    {
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }

    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
}
int main() {
    ll a,b;
    cin>> a >> b;


    cout<<GCD(a,b)<<endl;
}