#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> c=a;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());

    for(int i=1;i<=n;i++){
        b[i]=lower_bound(a.begin(),a.end(),c[i])-a.begin();
    }

    for(int i=1;i<=n;i++){
        if(i>=2) cout<<" ";
        cout<<b[i];
    }
    cout<<endl;
    
}