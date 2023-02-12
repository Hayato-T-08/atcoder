#include <bits/stdc++.h>
using namespace std;
int N,q;
int A[100009];
int x[100009];

int main(){
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>A[i];
    }
    sort(A+1,A+N+1);
    cin >> q;
        for(int i=1;i<=q;i++){
        cin>>x[i];
    }
    for(int i=1;i<=q;i++){
		int pos1 = lower_bound(A + 1, A + N + 1, x[i]) - A;
		cout << pos1 - 1 << endl;
    }

}