#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s(n),t(n),a(n);
    for(int i=0;i<n;i++) cin>>s[i]>>t[i];
    set<string> ss;
    bool jug=true;
    for(int i=0;i<n;i++){
        if(!ss.count(s[i])){
            ss.insert(s[i]);
            a[i]=s[i];
        }
        if(!ss.count(t[i])){
            ss.insert(t[i]);
            a[i]=t[i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                if(a[i]==s[j]||a[i]==t[j]) jug=false;
            }
        }
    }

    if(jug) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}