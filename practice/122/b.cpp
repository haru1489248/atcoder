#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    char s[4] = {'A', 'C', 'G', 'T'};

    int count = 0;
    vector<int> results;

    for (int i = 0; i < S.size(); i++) {
        bool is_acgt = false; // 今回の文字が ACGT のいずれかか？

        for (int j = 0; j < 4; j++) {
            if (S[i] == s[j]) {
                is_acgt = true; // 1つでも一致したら true
                break;
            }
        }

        if (is_acgt) {
            count++; // 一致したならカウントを増やす
        } else {
            // 一致しなかった（途切れた）なら、これまでのカウントを保存してリセット
            if (count > 0) {
                results.push_back(count);
                count = 0;
            }
        }
    }

    // ループ終了後：末尾で終わっている場合のカウントを保存
    if (count > 0) {
        results.push_back(count);
    }

    int maximum = 0;
    for (int i = 0; i < results.size(); i++) {
        if (maximum < results[i]) maximum = results[i];
    }

    cout << maximum << endl;
}
