#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m+1);
    vector<int> ans(n+1,m);
    for(int i=1;i<=m;i++) cin>>a[i];
    for(int i=1;i<=m;i++) ans[a[i]]--;
    for(int i=1;i<=n;i++) cout<<ans[i]<<endl;

}