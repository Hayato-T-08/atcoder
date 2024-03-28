#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int size=s.size();
    bool ans1=false,ans2=false,ans3=false;
    for(int i=0;i<size;i++){
        if(s[i]<='Z'&&'A'<=s[i]) ans1=true;
    }

    for(int i=0;i<size;i++){
        if(s[i]<='z'&&'a'<=s[i]) ans2=true;
    }

    int size2;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    size2=s.size();
    if(size==size2) ans3=true;
    if(ans1&&ans2&&ans3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}