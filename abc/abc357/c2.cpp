#include <iostream>
#include <string>

using namespace std;

void drawBlock(int k, int x, int y) {
    if (k == 0) {
        cout << "#";
    } else {
        int size = 3 * (1 << (k - 1));
        if (x < size && y < size) {
            drawBlock(k - 1, x, y);
        } else if (x < size && y < 2 * size) {
            drawBlock(k - 1, x, y - size);
        } else if (x < size && y < 3 * size) {
            drawBlock(k - 1, x, y - 2 * size);
        } else if (x < 2 * size && y < size) {
            drawBlock(k - 1, x - size, y);
        } else if (x < 2 * size && y < 2 * size) {
            cout << ".";
        } else if (x < 2 * size && y < 3 * size) {
            drawBlock(k - 1, x - size, y - 2 * size);
        } else if (x < 3 * size && y < size) {
            drawBlock(k - 1, x - 2 * size, y);
        } else if (x < 3 * size && y < 2 * size) {
            drawBlock(k - 1, x - 2 * size, y - size);
        } else if (x < 3 * size && y < 3 * size) {
            drawBlock(k - 1, x - 2 * size, y - 2 * size);
        }
    }
}

void drawPattern(int k) {
    int size = 3 * (1 << k);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            drawBlock(k, i, j);
        }
        cout << endl;
    }
}

int main() {
    int k;
    cout << "k=";
    cin >> k;
    drawPattern(k);
    return 0;
}
