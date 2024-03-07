#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> x(h,vector<int>(w,0));

    rep(i,h){
        rep(j,w){
            cin>>x[i][j];
        }
    }

    vector<vector<int>> sum(h+2,vector<int>(w+2,0));
    rep3(i,1,h+1){
        rep3(j,1,w+1){
            sum[i][j] = sum[i][j-1] + x[i-1][j-1];
        }
    }

    rep3(i,1,h+1){
        rep3(j,1,w+1){
            sum[i][j] += sum[i-1][j];
        }
    }


    int q;
    cin>>q;
    rep(i,q){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1]<<endl;
    }
}