#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3,y3,x4,y4;
    x3=x2-(y2-y1);
    y3=y2+(x2-x1);
    x4=x1-(y2-y1);
    y4=y1+(x2-x1);
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
}