#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m,t;
    cin>>n>>m>>t;
    int cur=n;
    int last_time=0;
    bool res=true;
    rep(i,m+1){
        if(i==m){
            int a=t,b=t;
            cur-=a-last_time;
            if(cur<=0) res=false;
            cur=min(n,cur+b-a);
            last_time=b;
        }else{
            int a,b;
            cin>>a>>b;
            cur-=a-last_time;
            if(cur<=0) res=false;
            cur=min(n,cur+b-a);
            last_time=b;
        } 
    }
    
    if(res) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}