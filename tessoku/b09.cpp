#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1),b(n+1),c(n+1),d(n+1);
    rep3(i,1,n+1) cin>>a[i]>>b[i]>>c[i]>>d[i];

    vector<vector<int>> x(1509,vector<int>(1509,0));
    rep3(i,1,n+1){
        x[a[i]][b[i]]++;
        x[c[i]][d[i]]++;
        x[a[i]][d[i]]--;
        x[c[i]][b[i]]--;
    }

    rep3(i,0,1501){
        rep3(j,1,1501){
            x[i][j]=x[i][j-1]+x[i][j];
        }
    }

    rep3(j,0,1501){
        rep3(i,1,1501){
            x[i][j]=x[i-1][j]+x[i][j];
        }
    }

    int cnt=0;
    rep3(i,0,1501){
        rep3(j,0,1501){
            if(x[i][j]>=1) cnt++;
        }
    }
    cout<<cnt<<endl;
}