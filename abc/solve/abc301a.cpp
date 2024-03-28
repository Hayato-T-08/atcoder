#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    pair<int,int> c1,c2;
    c1.first = 0;
    c2.first = 0;
    rep(i,n){
        if(s[i]=='T') {
            c1.first++;
            c1.second=i;
            }

        else {
            c2.first++;
            c2.second = i;
        }
    }
    if(c1.first>c2.first){
        cout<<'T'<<endl;
    }else if(c1.first<c2.first){
        cout<<'A'<<endl;
    }else{
        if(c1.second<c2.second) cout<<'T'<<endl;
        else cout<<'A';
    }
}