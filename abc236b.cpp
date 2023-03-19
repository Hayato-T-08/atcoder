#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(4*n-1);
    for(auto& x:a) cin>>x;

    vector<int> jug(n+1,0);
    for(int i=0;i<4*n-1;i++){
        jug[a[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(jug[i]==3) cout<<i<<endl;
    }
}