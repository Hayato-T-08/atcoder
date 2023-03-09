#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    int j = n - 2;
    while (p[j] < p[j + 1]) {
        j -= 1;
    }
    int k = n - 1;
    while (p[j] < p[k]) {
        k -= 1;
    }
    swap(p[j], p[k]);
    reverse(begin(p) + j + 1, end(p));
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " \n"[i + 1 == n];
    }
    return 0;
}