#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int k,x;
    cin>>k>>x;
    rep3(i,x-k+1,x+k){
        cout<<i<<" ";
    }
    cout<<endl;

}