#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    string S; cin >> S;
    map<char, int> m;
    set<char> s;

    rep(i, S.size()) {
        if (m.count(S.at(i))) {
            m[S.at(i)]++;
        } else {
            m[S.at(i)] = 1;
        }
    }

    int max_count = -1;
    for (pair p : m) {
        if (max_count <= p.second) {
            max_count = p.second;
        }
    }

    for (pair p : m) {
        if (p.second == max_count) {
            s.insert(p.first);
        }
    }

    rep(i, S.size()) {
        if (s.count(S[i])) {
            continue;
        } else {
            cout << S[i];
        }
    }
    cout << endl;
}
