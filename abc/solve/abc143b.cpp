#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> d(n);
    rep(i,n) cin>>d[i];
    int sum=0;
    rep3(i,0,n){
        rep3(j,i+1,n){
            sum+=d[i]*d[j];
        }
    }
    cout<<sum<<endl;
}