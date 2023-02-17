#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int sum_xor=a[1];
    for(int i=2;i<=n;i++) sum_xor=sum_xor ^ a[i];
    if(sum_xor!=0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}