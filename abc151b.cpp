#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    vector<int> a(n-1);
    rep(i,n-1) cin>>a[i];
    int sum=0;
    rep(i,n-1) sum+=a[i];

    int need;
    need=n*m-sum;
    if(need>k){
        cout<<-1<<endl;
    }else if(need<0){
        cout<<0<<endl;
    }else{
        cout<<need<<endl;
    }
}