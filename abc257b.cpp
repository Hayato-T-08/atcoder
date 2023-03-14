#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(k+1),l(q+1);
    for(int i=1;i<=k;i++) cin>>a[i];
    for(int i=1;i<=q;i++) cin>>l[i];

    for(int i=1;i<=q;i++){
        bool jug=true;
        if(a[l[i]]==n) continue;
        for(int j=1;j<=k;j++){
            if(a[l[i]]>a[j]) continue;
            if(a[l[i]]+1==a[j]) jug=false;
        }
        if(jug) a[l[i]]+=1;
    }

    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    cout<<endl;
}