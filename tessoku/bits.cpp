#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    int s;
    cin>>n;
    cin>>s;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) sum+=a[j];
        }
        if(sum==s){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}