#include <bits/stdc++.h>
using namespace std;

long long f(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = n;
    int cur = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] - a[i - 1] != a[i + 1] - a[i])
        {
            ans += f(i - cur);
            cur = i;
        }
    }
    ans += f(n - 1 - cur);
    cout << ans << endl;
}
