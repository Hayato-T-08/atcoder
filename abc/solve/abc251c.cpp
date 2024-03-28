#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> m;
    int n;
    cin>>n;
    int idx=-1;
    long long max=-1;
    for(int i=1;i<=n;i++){
        string s;
        long long x;
        cin>>s>>x;
        if(!m.count(s)&&max<x){
            idx=i;
            max=x;
        }
        m.insert(s);
    }
    cout<<idx<<endl;
}