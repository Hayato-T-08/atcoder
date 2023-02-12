#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> p;
vector<int> q;
bool search(int x){
    int l=1,r=n*n;
    while(l<=r){
        int m;
        m=(r+l)/2;
        if(q[m]==x) return true;
        if(x<q[m]) r=m-1;
        if(x>q[m]) l=m+1;

    }
    return false;
}
int main(){
    
    cin>>n>>k;
    vector<int> a(n+1);
    vector<int> b(n+1);
    vector<int> c(n+1);
    vector<int> d(n+1);

    p.push_back(0);
    q.push_back(0);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) cin>>c[i];
    for(int i=1;i<=n;i++) cin>>d[i];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            p.push_back(a[i]+b[j]);
            q.push_back(c[i]+d[j]);
        }
    }

    sort(q.begin(),q.end());

    bool ans=false;

    for(int i=1;i<=n*n;i++){
        ans|=search(k-p[i]);
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    
}