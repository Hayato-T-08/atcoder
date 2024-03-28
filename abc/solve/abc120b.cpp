#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b;
    cin>>a>>b;
    int k;
    cin>>k;
    vector<int> div;
    rep3(i,1,101){
        if(a%i==0 and b%i==0){
            div.push_back(i);
        }
    }
    reverse(all(div));
    cout<<div[k-1]<<endl;
    
}