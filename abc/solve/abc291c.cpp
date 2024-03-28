#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
    string s;
    cin>>s;
    bool ans=false;
    int x=0,y=0;
    set<pair<int,int>> st;
    st.insert(make_pair(0,0));
    for(int i=0;i<n;i++){
        if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
        else if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        if(st.count(make_pair(x,y))) ans=true;
        st.insert(make_pair(x,y));
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}