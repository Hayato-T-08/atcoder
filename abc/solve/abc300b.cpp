#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
vector<vector<char>> shit_t(vector<vector<char>> a,int h,int w){
    vector<vector<char>> a_t(h,vector<char>(w));
    rep(j,w){
        rep(i,h-1) a_t[i][j]=a[i+1][j];
        a_t[h-1][j]=a[0][j];
    }
    return a_t;
}

vector<vector<char>> shit_y(vector<vector<char>> a,int h,int w){
    vector<vector<char>> a_t(h,vector<char>(w));
    rep(i,h){
        rep(j,w-1) a_t[i][j]=a[i][j+1];
        a_t[i][w-1]=a[i][0];
    }
    return a_t;
}
int main(){
    int h,w;
    cin>>h>>w;

    vector<vector<char>> a(h,vector<char>(w)),b(h,vector<char>(w));

    rep(i,h)rep(j,w) cin>>a[i][j];
    rep(i,h)rep(j,w) cin>>b[i][j];

    if(a==b){
        cout<<"Yes"<<endl;
        return 0;
    }
    vector<vector<char>> a_t(h,vector<char>(w));
    a_t=a;
    rep(i,h){
        a_t=shit_t(a_t,h,w);
        if(a_t==b) {
            cout<<"Yes"<<endl;
            return 0;
        }
        rep(j,w){
            a_t=shit_y(a_t,h,w);
            if(a_t==b){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;

}