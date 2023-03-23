#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans;
    for(int i=1;(1+i)*i/2<n;i++){
        ans=i;
    }
    ans++;
    cout<<ans<<endl;
}