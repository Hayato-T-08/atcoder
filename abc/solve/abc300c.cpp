#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
bool jug(vector<vector<char>> c,int i,int j,int h,int w,int n){
    if(c[i][j]=='#'){
        bool flag1=true;
        rep3(d,1,n+1){
            if(i+d>=h) return false;
            if(j+d>=h) return false;
            if(i-d<0) return false;
            if(j-d<0) return false;
            if(c[i+d][j+d]=='#' and c[i+d][j-d]=='#' and c[i-d][j+d]=='#' and c[i-d][j-d]=='#'){
                flag1&=true;
            }else return false;
        }
        if(flag1){
            char a1,a2,a3,a4;
            if(i+n+1>=h) a1='.';
            if(j+n+1>=h) a2='.';
            if(i-n-1<0) a3='.';
            if(j-n-1<0) a4='.';

            if(i+n+1<h and j+n+1<h) a1=c[i+n+1][j+n+1];
            if(i+n+1<h and j-n-1>=0) a2=c[i+n+1][j-n-1];
            if(i-n-1>=0 and j+n+1<h) a3=c[i-n-1][j+n+1];
            if(i-n-1>=0 and j-n-1>=0) a4=c[i-n-1][j-n-1];

            if(a1=='.' or a2=='.' or a3=='.' or a4=='.'){
                return true;
            }
        }
    }
    return false;
}

bool jug2(vector<vector<char>> c,int i,int j,int h,int w,int n){
    bool flag1,flag2,flag3;
    flag1=c[i][j]=='#';
    flag2=true;
    rep3(d,1,n+1){
        if(i+d>=h) return false;
        if(j+d>=w) return false;
        if(i-d<0) return false;
        if(j-d<0) return false;
        if(c[i+d][j+d]=='#' and c[i+d][j-d]=='#' and c[i-d][j+d]=='#' and c[i-d][j-d]=='#'){
            flag2&=true;
        }else return false;
    }

    char a1,a2,a3,a4;
    if(i+n+1>=h) a1='.';
    if(j+n+1>=w) a2='.';
    if(i-n-1<0) a3='.';
    if(j-n-1<0) a4='.';

    if(i+n+1<h and j+n+1<w) a1=c[i+n+1][j+n+1];
    if(i+n+1<h and j-n-1>=0) a2=c[i+n+1][j-n-1];
    if(i-n-1>=0 and j+n+1<w) a3=c[i-n-1][j+n+1];
    if(i-n-1>=0 and j-n-1>=0) a4=c[i-n-1][j-n-1];
    flag3=(a1=='.' or a2=='.' or a3=='.' or a4=='.');
    return flag1 and flag2 and flag3;
    
}
int main(){
    int h,w;
    cin>>h>>w;
    int N=min(h,w);
    vector<int> ans(N,0);

    vector<vector<char>> c(h,vector<char> (w));
    rep(i,h)rep(j,w) cin>>c[i][j];
    
    rep3(n,1,N+1){
        rep3(i,n,h-n){
            rep3(j,n,w-n){
                bool flag = jug2(c,i,j,h,w,n);
                if(flag) ans[n-1]++;
            }
        }
    }

    rep(i,N) cout<<ans[i]<<" ";
    cout<<endl;

}