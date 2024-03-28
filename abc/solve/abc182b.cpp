#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int ans=-1,idx=0;
    rep3(i,2,10001){
        int tmp=0;
        rep(j,n){
            if(a[j]%i==0) {tmp++;
            }
        }
        if(ans<tmp) {idx=i;
            ans=tmp;
        }
    }
    cout<<idx<<endl;
}