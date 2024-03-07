#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> atari(n+1,0),hazure(n+1,0);
    rep3(i,1,n+1){
        int a;
        cin>>a;
        if(a == 1){
            atari[i] = atari[i-1] + 1;
            hazure[i] = hazure[i-1];
        }
        else{
            hazure[i] = hazure[i-1] + 1;
            atari[i] = atari[i-1];
        }
    }

    int q;
    cin>>q;

    rep(i,q){
        int l,r;
        cin>>l>>r;
        int win = atari[r] - atari[l-1];
        int lose = hazure[r] - hazure[l-1];
        if(win > lose){
            cout<<"win"<<endl;
        }else if(win < lose){
            cout<<"lose"<<endl;
        }else{
            cout<<"draw"<<endl;
        }
    }


}