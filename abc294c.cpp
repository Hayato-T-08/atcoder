#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m),c(n+m);
    for(auto& x:a) cin>>x;
    for(auto& x:b) cin>>x;

    for(int i=0;i<n;i++){
        c[i]=a[i];
    }

    for(int i=n;i<(n+m);i++){
        c[i]=b[i-n];
    }

    vector<int> seq_a(n),seq_b(m);
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++){
        int key=a[i];
        auto iter=lower_bound(c.begin(),c.end(),key);

        seq_a[i]=iter-c.begin();
        seq_a[i]++;
    }

    for(int i=0;i<m;i++){
        int key=b[i];
        auto iter=lower_bound(c.begin(),c.end(),key);

        seq_b[i]=iter-c.begin();
        seq_b[i]++;
    }
    for(auto x:seq_a) cout<<x<<" ";
    cout<<endl;
    for(auto y:seq_b) cout<<y<<" ";
    cout<<endl;

}