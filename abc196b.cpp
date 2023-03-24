#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    if(s.find(".")==string::npos){
        cout<<s<<endl;
        return 0;
    }
    int n=s.size();
    int idx;
    for(int i=0;i<n;i++){
        if(s[i]=='.') idx=i;
    }
    s.erase(s.begin()+idx,s.end());
    cout<<s<<endl;
}