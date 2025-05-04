#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // 累積和用に1-indexedで確保
    vector<vector<vector<long long>>> a(n + 1, vector<vector<long long>>(n + 1, vector<long long>(n + 1, 0)));
    vector<vector<vector<long long>>> sum(n + 1, vector<vector<long long>>(n + 1, vector<long long>(n + 1, 0)));

    // 入力（1-indexedに変換）
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                cin >> a[i][j][k];
            }
        }
    }

    // 3次元累積和の構築
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                sum[i][j][k] = a[i][j][k] + sum[i - 1][j][k] + sum[i][j - 1][k] + sum[i][j][k - 1] - sum[i - 1][j - 1][k] - sum[i - 1][j][k - 1] - sum[i][j - 1][k - 1] + sum[i - 1][j - 1][k - 1];
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int Lx, Ly, Lz, Rx, Ry, Rz;
        cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;
        // クエリは1-indexedなので、そのまま使用
        long long ans = sum[Rx][Ry][Rz] - sum[Lx - 1][Ry][Rz] - sum[Rx][Ly - 1][Rz] - sum[Rx][Ry][Lz - 1] + sum[Lx - 1][Ly - 1][Rz] + sum[Lx - 1][Ry][Lz - 1] + sum[Rx][Ly - 1][Lz - 1] - sum[Lx - 1][Ly - 1][Lz - 1];
        cout << ans << endl;
    }
    return 0;
}
