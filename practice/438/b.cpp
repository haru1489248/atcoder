#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    vector<string> S;
    int num = s.size() - t.size() + 1;
    rep(i, num) {
        S.push_back(s.substr(i, t.size()));
    }

    int minimum = 1000000;
    rep(i, num) {
        int total = 0;
        rep(j, t.size()) {
            if ((int)S.at(i).at(j) < (int)t.at(j)) {
                total += (int)S.at(i).at(j) + 10 - t.at(j);
            } else {
                total += (int)S.at(i).at(j) - t.at(j);
            }
        }
        minimum = min(minimum, total);
    }

    cout << minimum << endl;
}
