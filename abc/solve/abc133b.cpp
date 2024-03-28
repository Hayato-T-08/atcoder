#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
double dist(vector<int> x1,vector<int> x2,int d){
    int sum=0;
    double ans;
    rep(i,d){
        sum+=(x1[i]-x2[i])*(x1[i]-x2[i]);
    }
    ans=sqrt(sum);
    return ans;
}
bool is_int(double x){
    return floor(x)==x;
}
int main(){
    int n,d;
    cin>>n>>d;
    vector<vector<int>> x(n,vector<int>(d));
    rep(i,n){
        rep(j,d) cin>>x[i][j];
    }
    int ans=0;
    rep(i,n){
        rep3(j,i+1,n){
            double dis=dist(x[i],x[j],d);
            if(is_int(dis)) ans++;
        }
    }
    cout<<ans<<endl;

}