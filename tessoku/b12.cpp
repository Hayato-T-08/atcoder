#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))

double f(double x){
    return x*x*x + x;
}

int main(){
    int n;
    cin>>n;

    double left = 1;
    double right = 100;
    double ans;
    while(right - left >= 1e-3){
        double mid = (left + right) / 2;

        if(f(mid) == n){
            left = mid;
            break;
        }else if(f(mid) < n){
            left = mid;
        }else{
            right = mid;
        }
    }
    
    ans = left;
    cout << ans << endl;

}