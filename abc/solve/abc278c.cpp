#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int q;
    cin>>n>>q;
    set<pair<long long,long long>> f;
    for(int i=0;i<q;++i){
        int t;
        long long a,b;
        cin>>t>>a>>b;
        if(t==1) f.insert(make_pair(a,b));
        else if(t==2) f.erase(make_pair(a,b));
        else{
            if(f.find(make_pair(a,b))!=f.end()&&f.find(make_pair(b,a))!=f.end()){
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
        }
    }
}