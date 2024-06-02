#include<bits/stdc++.h>
#define mod 998244353

using namespace std;

long long f(long long j,long long n){
  long long res=((n>>(j+1))<<j);//n/2^(j+1)*2^j
  if(n&(1ll<<j)){//nのj桁目が1の時
    res+=((n&((1ll<<j)-1))+1);
  }
  return res;
}

int main(){
  long long n,m;
  cin >> n >> m;
  long long res=0;
  for(long long i=0;i<60;i++){
    if(m&(1ll<<i)){//mのi桁目が1の時
      res+=f(i,n);
      res%=mod;
    }
  }
  cout << res << "\n";
  return 0;
}
