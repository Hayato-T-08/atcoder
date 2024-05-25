#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    
    vector<int> A(T);
    for (int i = 0; i < T; ++i) {
        cin >> A[i];
    }
    
    vector<vector<bool>> marked(N, vector<bool>(N, false));
    vector<int> row_count(N, 0), col_count(N, 0);
    int diag1_count = 0, diag2_count = 0;
    
    for (int turn = 0; turn < T; ++turn) {
        int num = A[turn];
        int i = (num - 1) / N;
        int j = (num - 1) % N;
        
        marked[i][j] = true;
        row_count[i]++;
        col_count[j]++;
        if (i == j) diag1_count++;
        if (i + j == N - 1) diag2_count++;
        
        if (row_count[i] == N || col_count[j] == N || diag1_count == N || diag2_count == N) {
            cout << turn + 1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
