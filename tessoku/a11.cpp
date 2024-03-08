#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);

    rep(i,n){
        cin >> a[i];
    }

    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            cout << mid+1 << endl;
            return 0;
        }else if(a[mid] > x){
            right = mid-1;
        }else{
            left = mid + 1;
        }
    }
    
}