#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto& x:a) cin>>x;
    for(auto& x:b) cin>>x;

    int ans1=0,ans2=0;

    for(int i=0;i<n;i++){
        if(a[i]==b[i]) ans1++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else if(a[i]==b[j]) ans2++;
        }
    }

    cout<<ans1<<endl;
    cout<<ans2<<endl;
}