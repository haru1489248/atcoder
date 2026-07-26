#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<vector<pair<int, int>>> xy(N);

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        for (int j = 0; j < A; j++) {
            pair<int, int> p;
            cin >> p.first >> p.second;
            xy.at(i).push_back(p);
        }
    }
    int count = 0;
    int maximum = -1;
    for (int i = 0; i < (1 << N); i++) {
        bool ok = true;
        for (int j = 0; j < N; j++) {
            if ((i >> j) & 1) {
                for (pair p : xy.at(j)) {
                    if (((i >> p.first - 1) & 1) != p.second) {
                        ok = false;
                        break;
                    }
                }
            }
            if (!ok) break;
        }

        if (ok) {
            int count = __builtin_popcount(i);
            maximum = max(maximum, count);
        }
    }
    cout << maximum << endl;
}
