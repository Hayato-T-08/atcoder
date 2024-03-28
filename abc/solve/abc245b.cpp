#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_a=-1;
    vector<int> a(n),b;
    for(auto& x: a) cin>>x;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    
    max_a=a.size();

    for(int i=0;i<=max_a;i++){
        if(a[i]!=i){
            cout<<i<<endl;
            break;
        }
    }
}