#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(k);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    bool jug=false;
    for(int i=0;i<k;i++){
        if(max==a[b[i]-1]) jug=true;
    }
    if(jug) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}