#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n;
    string s,t;
    cin>>n>>s;
    ll count=0;
    rep(i,n){
        if(s[i]=='-') count++;
    }
    if(count==ll(s.size())){
        cout<<-1<<endl;
        return 0;
    }
    
    priority_queue<ll> que;
    ll cnt=0;
    que.push(-1);
    rep(i,n){
        if(s[i]=='o') cnt++;
        else{
            que.push(cnt);
            cnt=0;
        }
    }
    t=s;
    reverse(all(t));
    cnt=0;
    rep(i,n){
        if(t[i]=='o') cnt++;
        else{
            que.push(cnt);
            cnt=0;
        }
    }

    
    cout<<que.top()<<endl;
    return 0;
}