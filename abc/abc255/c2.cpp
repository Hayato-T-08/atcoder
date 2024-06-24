#include<bits/stdc++.h>
//場合分け
using namespace std;

int main(){
  long long x,a,d,n;
  cin >> x >> a >> d >> n;

  if(d<0){
    long long fi=a+d*(n-1);
    a=fi;
    d*=-1;
  }

  long long st=a;//初項
  long long fi=a+d*(n-1);//最終項
  if(st<=x && x<=fi){//xが数列の中にある場合
    long long m;
    if(d!=0){m=(x-st)%d;}//mはxがstから何個目の数列にあるか
    else{m=0;}
    cout << min(m,d-m) << '\n';
  }
  else if(x<st){cout << st-x << '\n';}
  else{cout << x-fi << '\n';}
  return 0;
}
