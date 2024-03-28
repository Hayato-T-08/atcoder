#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n)),b(n,vector<int>(n)),c;
    rep(i,n)rep(j,n) cin>>a[i][j];
    rep(i,n)rep(j,n) cin>>b[i][j];

    bool jug1=true,jug2=true,jug3=true,jug4=true;
    rep(i,n){
        rep(j,n){
            if(a[i][j]==1){
                if(b[i][j]==0) jug1&=false;
            }
        }
    }

    // cout<<jug1<<endl;
    c=a;
    rep(i,n){
        rep(j,n){
            a[i][j]=c[n-j-1][i];
            // cout<<a[i][j]<<" ";
                }
        // cout<<endl;
    }

    rep(i,n){
        rep(j,n){
            if(a[i][j]==1){
                if(b[i][j]==0) jug2&=false;
            }
        }
    }
    // cout<<jug2<<endl;

    c=a;

    rep(i,n){
        rep(j,n){
            a[i][j]=c[n-j-1][i];
            // cout<<a[i][j]<<" ";
                }
        // cout<<endl;
    }

    rep(i,n){
        rep(j,n){
            if(a[i][j]==1){
                if(b[i][j]==0) jug3&=false;
            }
        }
    }
    // cout<<jug3<<endl;
    c=a;
        rep(i,n){
        rep(j,n){
            a[i][j]=c[n-j-1][i];

                }
        // cout<<endl;
    }

    rep(i,n){
        rep(j,n){
            if(a[i][j]==1){
                if(b[i][j]==0) jug4&=false;
            }
        }
    }
    // cout<<jug4<<endl;

    if(jug1 or jug2 or jug3 or jug4) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



    


}