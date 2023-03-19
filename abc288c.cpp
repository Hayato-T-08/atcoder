#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;

int main() {
	int n,m;
	cin>>n>>m;
	dsu un(n);
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		u--;
		v--;
		un.merge(u,v);
	}
	int size=un.groups().size();
	cout<<m-n+size<<endl;
}
