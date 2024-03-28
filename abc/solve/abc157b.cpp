#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<vector<int>> bin(3,vector<int>(3));
    rep(i,3)rep(j,3) cin>>bin[i][j];
    int n;
    cin>>n;
    vector<vector<bool>> b(3,vector<bool>(3,false));
    rep(i,n){
        int x;
            cin>>x;
        rep(j,3)rep(k,3){
            
            if(bin[j][k]==x) b[j][k]=true;
        }
    }
    bool jug1=false,jug2=false, jug3=false;
    rep(i,3){
        if(b[i][0] and b[i][1] and b[i][2]) jug1 = true;
        if(b[0][i] and b[1][i] and b[2][i]) jug2 = true;
    }
    if(b[0][0] and b[1][1] and b[2][2]) jug3=true;
    if(b[0][2] and b[1][1] and b[2][0]) jug3=true;
    if(jug1 or jug2 or jug3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}