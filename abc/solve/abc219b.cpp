#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> a(3);
    for(int i=0;i<3;i++) cin>>a[i];
    string t;
    cin>>t;
    string ans="";
    for(int i=0;i<int(t.size());i++){
        ans+=a[int(t[i]-'0')-1];
    }
    cout<<ans<<endl;
}