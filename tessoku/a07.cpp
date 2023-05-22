#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int d;
    cin>>d;
    int n;
    cin>>n;
    vector<int> l(n),r(n);
    rep(i,n) {
        cin>>l[i]>>r[i];
        l[i]--;
        r[i]--;
    };

    vector<int> a(d+1),sum(d+1,0);
    rep(i,n){
        a[l[i]]++;
        a[r[i]+1]--;
    }

    sum[0]=a[0];

    rep3(i,1,d){
        sum[i]=sum[i-1]+a[i];
    }

    for(int i=0;i<d;i++){
        cout<<sum[i]<<endl;
    }
}