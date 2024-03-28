#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,d,x;
    cin>>n>>d>>x;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    int cnt=n;
    rep(i,n){
        int tmp=a[i];
        while(a[i]+1<=d){
            cnt++;
            a[i]+=tmp;
        }
    }

    cout<<cnt+x<<endl;
}