#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    // 累積和の剰余を計算
    vector<long long> sum(2*n, 0);
    sum[0] = a[0];
    for(int i=1; i<2*n; i++) {
        sum[i] = (sum[i-1] + a[i%n]) % m;
    }
    
    // 各剰余の出現回数をカウント
    unordered_map<long long, long long> cnt;
    long long ans = 0;
    for(int i=0; i<n;i++){
        cnt[sum[i]]++;
    }
    for(int i=n; i<2*n; i++) {
        cnt[sum[i-n]]--;
        ans += cnt[sum[i]];
        cnt[sum[i]]++;
    }
    
    cout << ans << endl;
}