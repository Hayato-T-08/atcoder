#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    for(int i=0;i<4;i++){
        string si;
        cin>>si;
        s.insert(si);
    }

    if(s.size()==4) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}