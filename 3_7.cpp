#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    long long total_sum = 0;

    for (int bit = 0; bit < (1 << (N - 1)); bit++) {
        long long current_num = 0;

        for (int i = 0; i < N; i++) {
            current_num = current_num * 10 + (S.at(i) - '0'); // 文字コードでの引き算

            if (i < N - 1 && ((bit >> i) & 1)) {
                total_sum += current_num;
                current_num = 0;
            }
        }

        total_sum += current_num;
    }

    cout << total_sum << endl;
}
