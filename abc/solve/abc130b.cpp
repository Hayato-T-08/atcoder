#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> l(n+1),d(n+1);
    rep(i,n) cin>>l[i];
    int cnt=1;
    d[0]=0;
    rep3(i,1,n+1){
        d[i]=l[i-1]+d[i-1];
        if(d[i]>x) break;
       
        cnt++;
    }
    cout<<cnt<<endl;

}