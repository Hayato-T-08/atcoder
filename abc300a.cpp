#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    vector<int> c(n);
    rep(i,n) cin>>c[i];

    rep(i,n){
        if(c[i]==a+b){
            cout<<i+1<<endl;
            break;
        }
    }
}