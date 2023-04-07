#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i],a[i]--;

    int max=1e5;
    int now=0,cnt=0;
    rep(i,max){
        int next=a[now];
        if(next==1){
            cout<<cnt+1<<endl;
            return 0;
        }
        now=next;
        cnt++;
    }
    cout<<-1<<endl;
}