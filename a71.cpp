#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<n;i++){
        ans+=a[i]*b[i];
    }
    cout<<ans<<endl;
}