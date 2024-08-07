#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
//union_findの解法
int main() {
    
	int N,M;
	cin>>N>>M;
	vector<int> u(M),v(M);
	for(int i=0;i<M;i++){
		cin>>u[i]>>v[i];
		u[i]--,v[i]--;
	}
	
	dsu D(N);
	for(int i=0;i<M;i++){
		D.merge(u[i],v[i]);
	}
	
	vector<int> vs(N),es(N);
	for(int i=0;i<N;i++){
		vs[D.leader(i)]++;//連結成分のリーダーのサイズ
	}
	
	for(int i=0;i<M;i++){
		es[D.leader(u[i])]++;//連結成分のリーダーの辺の数
	}
	
	if(vs==es)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	return 0;
}
