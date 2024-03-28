#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int N,A,B;
	cin>>N>>A>>B;
	
	vector<string> tiles(N,string(N,'-'));
	for(int i=0;i<N;i++){
		if(i%2==0){
			for(int j=0;j<N;j++){
				if(j%2==0)tiles[i][j] = '.';
				else tiles[i][j] = '#';
			}
		}
		else{
			for(int j=0;j<N;j++){
				if(j%2==0)tiles[i][j] = '#';
				else tiles[i][j] = '.';
			}
		}
	}
	
	vector<string> X(A*N,string(B*N,'-'));
	for(int i=0;i<A*N;i++){
		for(int j=0;j<B*N;j++){
			X[i][j] = tiles[i/A][j/B];
		}
	}
	
	for(int i=0;i<A*N;i++){
		cout<<X[i]<<endl;
	}
	
    return 0;
}
