#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    pair<char, int> p;
    p.first = s[0];
    p.second = 1;
    for(int i=1;i<n;i++) {
        if(s[i] == p.first) {
            p.second++;
        }else{
            v.push_back(p);
            p.first = s[i];
            p.second = 1;
        }
    }
    v.push_back(p);


    int ans = 0;
    for(int i=1;i<v.size();i++) {
        pair<char, int> prev = v[i-1];
        pair<char, int> now = v[i];
        if(prev.first == '-' && now.first == 'o') {
            ans = max(ans, now.second);
        }
        if(prev.first == 'o' && now.first == '-') {
            ans = max(ans, prev.second);
        }
    }
    if(ans == 0) {
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}
