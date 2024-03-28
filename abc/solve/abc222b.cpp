#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p;
    cin>>n>>p;
    vector<int> a(n);
    for(auto& x:a) cin>>x;
    int ans=0;
    for(auto& x:a) if(x<p) ans++;
    cout<<ans<<endl;
}