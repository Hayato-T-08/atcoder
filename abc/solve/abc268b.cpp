#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()>t.size()) {
        cout<<"No"<<endl;
        return 0;
    }
    bool check=true;
    for(int i=0;i<int(s.size());i++){
        if(s[i]!=t[i]) check=false;
    }
    if(check) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}