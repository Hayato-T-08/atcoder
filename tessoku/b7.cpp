#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int t,n;
    cin>>t>>n;
    vector<int> a(t+1,0),b(t+1,0);
    rep(i,n){
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r]--;
    }

    rep3(i,0,t+1){
        if(i==0){
            b[i] = a[i];
        }else{
            b[i] = b[i-1] + a[i];
        }
        
    }

    rep3(i,0,t){
        cout<<b[i]<<endl;
    }
}