#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int H, W, Y;
vector<vector<int>> A;
vector<vector<bool>> is_island;

void flood(int height) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(H, vector<bool>(W, false));

    // 外周から浸水を開始
    for (int i = 0; i < H; ++i) {
        if (A[i][0] <= height && !visited[i][0]) {
            q.push({i, 0});
            visited[i][0] = true;
        }
        if (A[i][W-1] <= height && !visited[i][W-1]) {
            q.push({i, W-1});
            visited[i][W-1] = true;
        }
    }
    for (int j = 1; j < W-1; ++j) {
        if (A[0][j] <= height && !visited[0][j]) {
            q.push({0, j});
            visited[0][j] = true;
        }
        if (A[H-1][j] <= height && !visited[H-1][j]) {
            q.push({H-1, j});
            visited[H-1][j] = true;
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        is_island[x][y] = false;

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && A[nx][ny] <= height) {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
}

int count_remaining_land() {
    int count = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (is_island[i][j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> H >> W >> Y;
    A.resize(H, vector<int>(W));
    is_island.resize(H, vector<bool>(W, true));

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> A[i][j];
        }
    }

    vector<int> result(Y + 1);
    result[0] = H * W;  // 初期状態では全ての陸地が残っている

    for (int year = 1; year <= Y; ++year) {
        flood(year);
        result[year] = count_remaining_land();
    }

    for (int i = 1; i <= Y; ++i) {
        cout << result[i] << '\n';
    }

    return 0;
}