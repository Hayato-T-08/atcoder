#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    // 無限
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    if (sum <= m)
    {
        cout << "infinite" << endl;
        return 0;
    }
    // 有限
    long long R = m;
    long long L = 0;
    // min(a[i],x)の総和がm以下になる最大のx
    vector<long long> sums(n + 1, 0);
    for (int i = 0; i < n; i++)
        sums[i + 1] = sums[i] + a[i];
    while (R - L > 1)
    {
        long long mid = (R + L) / 2;
        long long sum = 0;
        // sumを効率的に求める
        int idx = upper_bound(a.begin(), a.end(), mid) - a.begin();
        sum = sums[idx] + (n - idx) * mid;

        if (sum <= m)
            L = mid;
        else
            R = mid;
    }
    cout << L << endl;
}
