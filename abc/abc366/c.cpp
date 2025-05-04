#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    map<int, int> mp;
    for(int i=0;i<q;i++) {
        int t, x;
        cin >> t;
        if(t == 1) {
            cin >> x;
            mp[x]++;
        }
        if(t == 2){
            cin >> x;
            mp[x]--;
            if(mp[x] == 0) {
                mp.erase(x);
            }
        }
        if(t == 3) {
            cout << mp.size() << endl;
        }
    }
}
