#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    rep3(i,a,min(k+a-1,b)+1){
        cout<<i<<endl;
    }

    rep3(i,max(b-k+1,a+k),b+1){
        cout<<i<<endl;
    }
}