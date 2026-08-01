#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<int> A(N);
    rep(i, N) cin >> A[i];
    vector<int> B(N - 1);
    rep(i, N - 1) cin >> B[i];

    // パターン1: A[0] に何も足さない場合
    int ans1 = 0;
    vector<int> A1 = A; // 原本をコピー
    rep(i, N - 1) {
        if ((A1[i] + A1[i + 1]) % M != B[i]) {
            A1[i + 1] += 1;
            ans1++;
        }
    }

    // パターン2: A[0] に 1 を足す場合
    int ans2 = 1; // A[0] を 1 増やしたため、初期値を 1 にする
    vector<int> A2 = A; // 原本をコピー
    A2[0] += 1;
    rep(i, N - 1) {
        if ((A2[i] + A2[i + 1]) % M != B[i]) {
            A2[i + 1] += 1;
            ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;
    return 0;
}
