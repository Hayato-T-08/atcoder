#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    if(int(s.size())<=k) cout<<s<<endl;
    else{
        cout<<s.substr(0,k);
        cout<<"...";
    }

    cout<<endl;
}