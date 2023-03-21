#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int same=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x--;
        a[i]=x;
        if(a[i]==i) same++;
    }
    long long ans=(long long)same*(same-1)/2;
    
    for(int i=0;i<n;i++){
        if(a[i]>i and a[a[i]]==i) ans++;
    }
    cout<<ans<<endl;
}