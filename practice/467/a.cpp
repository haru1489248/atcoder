#include <bits/stdc++.h>
using namespace std;

int main() {
    long long H, W; // 整数型でOK
    cin >> H >> W;

    // 分母の (H * H) を右辺にかけて「かけ算だけ」にする
    // 割り算をしないので、割り切れない心配も誤差の心配も 0%！
    if (10000 * W >= 25 * H * H) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
