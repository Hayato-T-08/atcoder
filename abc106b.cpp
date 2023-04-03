#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int ans=0;
    rep3(i,1,n+1){
        int cnt=0;
        if(i%2==0) continue;
        for(int j=1;j*j<=i;j++){
            if(j*j==i){
                cnt++;
                break;
            }
            if(i%j==0) cnt=cnt+2;
        }

        if(cnt==8){
            ans++;
        }
    }
    cout<<ans<<endl;
}