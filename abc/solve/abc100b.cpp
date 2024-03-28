#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int D,N;
    cin >> D >> N;
    if (N == 100) N++;
    cout << N;
    rep3(i, 0, D) cout << "00";
    cout << endl;
}