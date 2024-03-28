#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    set<string> t;
    for(int i=0;i<m;i++){
        string ts;
        cin>>ts;
        t.insert(ts);
    }
    for(int i=0;i<n;i++){
        if(t.count(s[i])) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}