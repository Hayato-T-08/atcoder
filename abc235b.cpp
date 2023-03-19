#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> h(n);
    for(auto& x:h) cin>>x;

    int now=0;

    for(int i=1;i<n;i++){
        if(h[now]>=h[i]&&now!=n-1) break;
        now=i;
    }

    cout<<h[now]<<endl;
}