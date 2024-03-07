#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<vector<int>> x(1502,vector<int>(1502,0));
    vector<vector<int>> sum(1502,vector<int>(1502,0));

    rep3(i,1,n+1){
        int xn,yn;
        cin>>xn>>yn;
        x[xn][yn]++;
    }

    rep3(i,1,1501){
        rep3(j,1,1501){
            sum[i][j] = sum[i][j-1] + x[i][j];
        }
    }

    rep3(i,1,1501){
        rep3(j,1,1501){
            sum[i][j] += sum[i-1][j];
        }
    }

    // rep3(i,0,1501){
    //     rep3(j,0,1501){
    //         cout<<x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int q;
    cin>>q;
    rep(i,q){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1]<<endl;
    }
}