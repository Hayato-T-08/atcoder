#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n+2);
    vector<int> left(n+2,0),right(n+2,0);

    rep3(i,1,n+1){
        cin >> a[i];
    }

    rep3(i,1,n+1){
        if(a[i] > left[i-1]){
            left[i] = a[i];
        }else{
            left[i] = left[i-1];
        }
    }

    for(int i=n;i>=1;i--){
        if(a[i] > right[i+1]){
            right[i] = a[i];
        }else{
            right[i] = right[i+1];
        }
    }

    // rep3(i,1,n+1){
    //     cout << left[i];
    // }
    // cout << endl;
    // rep3(i,1,n+1){
    //     cout << right[i];
    // }

    int d;
    cin>>d;

    rep(i,d){
        int l,r;
        cin>>l>>r;
        cout << max(left[l-1],right[r+1]) << endl;
    }
}