#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector<int> ans(k);
    priority_queue<int, vector<int>, greater<int> > q;

    for(int i=0;i<n;i++) q.push(a[i]);
    rep3(i,0,k){
        int v=q.top();
            if(i!=0){        
                while(v==ans[i-1]){
            q.pop();
            v=q.top();
        }}
            ans[i]=v;
            q.pop();
            rep(j,n){
                q.push(v+a[j]);
            }
        
    }

    cout<<ans[k-1]<<endl;
    
}