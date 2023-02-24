#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<long long> cnt(101,0);
    for(int i=1;i<=n;i++){
        cnt[a[i]]+=1;
    }
    long long ans=0;
    for(int i=1;i<=100;i++){
        ans+=cnt[i]*(cnt[i]-1)*(cnt[i]-2)/6;
    }
    cout<<ans<<endl;
}