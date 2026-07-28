#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i = 0; i < H; i++) cin >> C[i];

    // 全て '.' でない（何か文字がある）最小・最大の行と列を探す
    int top = H, bottom = -1;
    int left = W, right = -1;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (C[i][j] != '.') { // '.' 以外の文字（例えば '#' など）を見つけたら
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    // もし全部が '.' だった場合（何も出力しない、または何も残らない場合）
    if (bottom == -1) {
        return 0;
    }

    // 有効な範囲（top〜bottom 行、left〜right 列）だけを出力する
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}
