#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int main()
{
    int q;
    set<int> st;
    cin >> q;
    rep(i, q)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        else
        {
            int x;
            cin >> x;
            auto it = st.lower_bound(x);
            if (st.empty()) cout << -1 << endl;
            else
            {
                int next = 1e8,prev = 1e8;
                if (it == st.begin())
                {
                    next = abs(x - *it);
                }
                else if (it == st.end())
                {
                    prev = abs(x - (*(--it)));
                }
                else
                {
                    next = abs(x - *it);
                    prev = abs(x - (*(--it)));
                }
                cout << min(next, prev) << endl;
            }
        }
    }
    return 0;
}