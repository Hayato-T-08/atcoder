#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<int> dis(5);
    rep(i,5) cin>>dis[i];
    int ans=1e5;
    vector<int> a;
    rep(i,5) a.push_back(i);
    do{
		int t = 0;
		rep3(i, 0, 5) {
			int vi = a[i];
			if (0 < t % 10) t = t - (t % 10) + 10;
			t += dis[vi];
		}
        ans=min(t,ans);
    }while(next_permutation(all(a)));



    cout<<ans<<endl;
}
//順列で全探索