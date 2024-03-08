#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin >> n;

    vector<vector<int>> xy(1502,vector<int>(1502,0));
    vector<vector<int>> sum(1502,vector<int>(1502,0));

    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        xy[a][b]++;
        xy[c][d]++;
        xy[a][d]--;
        xy[c][b]--;
    }

    rep3(i,0,1501){
        rep3(j,0,1501){
            if(j == 0) sum[i][j] = xy[i][j];
            else{
                sum[i][j] = sum[i][j-1] + xy[i][j];
            }
        }
    }

    rep3(i,0,1501){
        rep3(j,0,1501){
            if(i == 0){
                sum[i][j] = sum[i][j];
            }else{
                sum[i][j] += sum[i-1][j];
            }
            
        }
    }
    int ans = 0;
    rep3(i,0,1501){
        rep3(j,0,1501){
            if(sum[i][j] > 0){
                ans++;
            }
            
        }
        
    }

    cout << ans << endl;
}