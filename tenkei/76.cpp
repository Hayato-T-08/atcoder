#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long N;
vector<long long> A(1 << 19);
vector<long long> B(1 << 19);

int main() {
    // Step #1. Input
    cin >> N;
    A.resize(N+1);
    B.resize(2*N+1);
    for (int i = 1; i <= N; i++) cin >> A[i];

    // Step #2. Make Array B
    for (int i = 1; i <= N; i++) B[i] = B[i - 1] + A[i];
    for (int i = 1; i <= N; i++) B[i + N] = B[i + N - 1] + A[i];
    if (B[N] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }

    // Step #3. Get Answer
    for (int i = 0; i <= N; i++) {
        long long goal = B[i] + B[N] / 10LL;
        auto pos1 = lower_bound(B.begin(), B.end(), goal);
        if (*pos1 == goal) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}