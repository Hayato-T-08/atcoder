#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
   vector<int> room(n+1,0),p(n+1),q(n+2);
    rep3(i,1,n+1) cin>>room[i];
    int d;
    cin>>d;
    vector<int> l(d+1),r(d+1);

    
    rep3(i,1,d+1) cin>>l[i]>>r[i];
    p[1]=room[1];
    rep3(i,2,n+1){
        p[i]=max(p[i-1],room[i]);
    }
    q[n]=room[n];
    for(int i=n-1;i>=1;i--){
        q[i]=max(room[i],q[i+1]);
    }

    for(int i = 1;i<=d;i++){
        cout<<max(p[l[i]-1],q[r[i]+1])<<endl;
    }

}