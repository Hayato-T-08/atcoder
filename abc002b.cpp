#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string w;
    cin>>w;

    rep(i,w.size()){
        if(w[i]=='a' or w[i]=='i' or w[i]=='u' or w[i]=='e' or w[i]=='o'){
            continue;
        }
        cout<<w[i];
    }
    cout<<endl;

}