#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int main() {
    int n,x;
    cin >> n >> x;
    string a;
    cin >> a;

    queue<int> que;
    que.push(x);
    a[x-1] = '@';
    while(!que.empty()){
        int now = que.front(); 
        que.pop();
        if(now-2 >= 0 && a[now-2] == '.'){
            que.push(now-1);
            a[now-2] = '@';
        }
        if(now < n && a[now] == '.'){
            que.push(now+1);
            a[now] = '@';
        }
    }

    cout<< a << endl;
    return 0;
}