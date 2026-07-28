#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    char X;
    cin >> N >> X;
    vector<string> S(N);
    map<char, int> m = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}};
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }
    bool can = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == m[X]) {
                if (S.at(i).at(j) == 'o') {
                    can = true;
                    break;
                }
            }
        }
    }
    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
