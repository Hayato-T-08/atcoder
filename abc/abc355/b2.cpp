#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool hasConsecutiveElementsFromA(const vector<int>& A, const vector<int>& B) {
    // C を作成
    vector<int> C;
    C.reserve(A.size() + B.size());
    C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());
    
    // C を昇順にソート
    sort(C.begin(), C.end());
    
    // A の要素をセットに保存して効率的な検索をサポート
    unordered_set<int> setA(A.begin(), A.end());
    
    // C の中で A の要素が連続しているかチェック
    for (size_t i = 1; i < C.size(); ++i) {
        if (setA.count(C[i]) > 0 && setA.count(C[i - 1]) > 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    vector<int> B(M);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    
    if (hasConsecutiveElementsFromA(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
