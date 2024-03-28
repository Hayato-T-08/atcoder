#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> t(n);
    rep(i,n) cin>>t[i];
    int m;
    cin>>m;
    rep(i,m){
        int p,x;
        cin>>p>>x;
        int sum=0;
        rep(j,n){
            if(p-1==j) sum+=x;
            else{
                sum+=t[j];
            }
        }
        cout<<sum<<endl;
    }
}