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
ll GetUp(ll r , set<ll> &st1){
    auto it = st1.lower_bound(r);
    if(it == st1.end()) return 1e18;
    return *it;
}

ll GetDown(ll r , set<ll> &st2){
    auto it = st2.lower_bound(-r);
    if(it == st2.end()) return -1e18;
    return -(*it);
}

int main(){
	int q;
	cin >> q;
	set<int> s;
	rep(i,q){
		int a,b;
		cin >> a >> b;
		if(a==1) s.insert(b);
		else {
			if(s.size()==0){
				cout << -1 << endl;
			} else {
				int pre=1073741823,nex=1073741823;
				auto itr = s.lower_bound(b);
				if(itr==s.end()) pre=b-(*(--itr));
				else if(itr==s.begin()) nex=(*itr)-b;
				else {
					nex=(*itr)-b;
					pre=b-(*(--itr));
				}
				cout << min(pre,nex) << endl;
			}
		}
	}
	return 0;
}
