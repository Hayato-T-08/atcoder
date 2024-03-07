#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w,n;
    cin >> h >> w >> n;

    vector<vector<int>> z(h+2,vector<int>(w+2,0)),sum(h+2,vector<int>(w+2,0));
    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        z[c+1][d+1]++;
        z[a][b]++;
        z[a][d+1]--;
        z[c+1][b]--;
    }

    rep3(i,1,h+1){
        rep3(j,1,w+1){
            sum[i][j] = sum[i-1][j] + z[i][j];
        }
    }

    rep3(i,1,h+1){
        rep3(j,1,w+1){
            sum[i][j] += sum[i][j-1];
        }
    }
    

    rep3(i,1,h+1){
        rep3(j,1,w+1){
            cout<<sum[i][j]<<" ";
            cout<<"";
        }
        cout<<endl;
    }
}