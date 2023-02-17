#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,h,w;
    cin>>n>>h>>w;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    int xor_a,xor_b;
    xor_a=a[1]-1;
    xor_b=b[1]-1;
    for(int i=2;i<=n;i++){
        xor_a^=(a[i]-1);
        xor_b^=(b[i]-1);
    }
    int jug=xor_a^xor_b;
    if(jug!=0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}