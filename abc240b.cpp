#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto& x:a) cin>>x;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    cout<<a.size()<<endl;
}