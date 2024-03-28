#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))

pair<int,int> p0 ;

int distance(pair<int,int> a,pair<int,int> b){
    int dis;
    dis = (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second);
    return dis;
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    return distance(p0,a) < distance(p0,b);
}


void isInfect(vector<pair<int,int>> p,int d,vector<bool>& infect,int i,int j){
    int dis = distance(p[i],p[j]);

    if(infect[i] and !infect[j] and dis<=d*d) infect[j] = true;
    if(infect[j] and !infect[i] and dis<=d*d) infect[i] = true;
}
int main(){

    int n,d;
    
    cin>>n>>d;
    vector<pair<int,int>> p(n);
    rep(i,n) cin>>p[i].first>>p[i].second;
    p0.first = p[0].first;
    p0.second = p[0].second;


    vector<bool> infect(n,false);
    infect[0]=true;


    rep(i,n){
        rep3(j,i+1,n){
            if(infect[i] and infect[j]) break;

            isInfect(p,d,infect,i,j);
            }
        }


    rep(i,n){
        if(infect[i]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}