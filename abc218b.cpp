#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p(26);
    string s="";
    for(auto& x:p) cin>>x;
    for(int i=0;i<26;i++){
        
        s+='a' + p[i] -1;
    }
    cout<<s<<endl;

}