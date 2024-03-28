#include<bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector<int> a;
  for(int i=0;i<60;i++){
    if(n&(1ll<<i)){a.push_back(i);}
  }
  int k=a.size();
  vector<long long> res;
  for(int i=0;i<(1<<k);i++){
    long long cur=0;
    for(int j=0;j<k;j++){
      if(i&(1<<j)){cur|=(1ll<<a[j]);}
    }
    res.push_back(cur);
  }
  sort(res.begin(),res.end());
  for(auto &nx : res){cout << nx << "\n";}
  return 0;
}
