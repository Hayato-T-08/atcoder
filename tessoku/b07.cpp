#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int t,n;
    cin>>t>>n;
    vector<int> l(n),r(n),sum(t,0);
    rep(i,n){ 
        cin>>l[i]>>r[i];

        sum[l[i]]++;
        sum[r[i]]--;
        }
    
    rep(i,t){
        if(i==0) continue;
        else{
            sum[i]=sum[i-1]+sum[i];
        }
    }

    for(auto x:sum) cout<<x<<endl;


}