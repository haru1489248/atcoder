#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    map<int, int> m;

    for (int i = 0; i < N; i++) {
        int C, S;
        cin >> C >> S;
        if (m.count(C)) {
            m[C] = max(m[C], S);
        } else {
            m[C] = S;
        }
    }

    for (int i = 1; i <= M; i++) {
        if (m.count(i)) {
            cout << m[i];
        } else {
            cout << -1;
        }
        if (i != M) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
}
