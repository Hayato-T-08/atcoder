#include <bits/stdc++.h>
using namespace std;
int N;
int A[100009], B[100009], C[100009], D[100009];
int X[1509][1509], Z[1509][1509];

int main() {
	// 入力
    
	cin >> N;
	for (int t = 1; t <= N; t++) cin >> A[t] >> B[t] >> C[t] >> D[t];
    for (int i = 0; i <= 1500; i++) {
		for (int j = 0; j <= 1500; j++) X[i][j] = 0;
	}
	// 各日について加算
	for (int t = 1; t <= N; t++) {
		X[A[t]][B[t]] += 1;
		X[A[t]][D[t] + 1] -= 1;
		X[C[t] + 1][B[t]] -= 1;
		X[C[t] + 1][D[t] + 1] += 1;
	}

	// 二次元累積和をとる

	for (int i = 0; i <= 1500; i++) {
		for (int j = 0; j <= 1500; j++) X[i][j] = X[i][j - 1] + X[i][j];
	}
	for (int j = 0; j <= 1500; j++) {
		for (int i = 0; i <= 1500; i++) X[i][j] = X[i - 1][j] + X[i][j];
	}

	// 出力
    int cnt=0;
	for (int i = 0; i <= 1500; i++) {
		for (int j = 0; j <= 1500; j++) {
			if (X[i][j]>=1){
                cnt++;
            }
		
	}

}
    cout<<cnt<<endl;
	
}