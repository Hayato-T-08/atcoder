#include <bits/stdc++.h>
#include <regex>
using namespace std;
bool check(string s){
    regex pattern(R"([HDCS][A2-9TJQK])");
    return regex_match(s,pattern);
}
int main(){
    int n;
    cin>>n;
    bool ans=true;
    vector<string> s,t;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);
        ans&=check(x);
    }
    t=s;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    unique(t.begin(),t.end());
    
    if(t!=s) ans&=false;
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

}