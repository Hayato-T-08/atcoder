#include <bits/stdc++.h>
#include<bitset>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    // vector<int> a(10,0);
    // int i = 0;
    // while(n>0){

    //     a[i] = n%2;
    //     n /= 2;
    //     i++;
    // }
    // reverse(all(a));
    // rep(i,10){
    //     cout<<a[i];
    // }
    bitset<10> a(n);
    cout<<a<<endl;
}