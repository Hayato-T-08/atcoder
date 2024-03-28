#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    vector<string> t(m);
    int cnt=0;
    for(int i=0;i<n;i++) cin>>s[i];

    for(int i=0;i<m;i++) cin>>t[i];
    
    for(int i=0;i<n;i++){
        string sub;
        sub=s[i].substr(3);
        bool jug=false;
        for(int j=0;j<m;j++){

            if(sub==t[j]){jug=true;}
            
    }
    if(jug) cnt++;
    
    
}
cout<<cnt<<endl;
}