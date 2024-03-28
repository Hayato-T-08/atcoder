#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int f(int n){
    if(n%2==0) return n/2;
    else return 3*n+1;
}
int main(){
    int s;
    cin>>s;
    set<int> set;
    set.insert(s);
    int last=s;
    rep3(i,2,1000001){
        int x;
        x=f(last);
        if(set.count(x)) {cout<<i<<endl;
        return 0;}else{
            set.insert(x);
        }        last=x;
    }
}