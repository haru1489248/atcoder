#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> vec(n);
    rep(i, 0, n) vec.at(i) = i+1;
    vec.erase(vec.begin());
    map<int, vector<int>> p;

    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        if (p.count(a)) {
            p[a].push_back(b);
        } else {
            p[a] = {b};
        }
        if (p.count(b)) {
            p[b].push_back(a);
        } else {
            p[b] = {a};
        }
    }

    int count = 0;
    do {
        bool ok;
        rep (i, 0, n - 1) {
            ok = false;
            vector<int> tmp = p[vec[i]];
            rep (j, 0, tmp.size()) {
                if (i == 0 && tmp.at(j) == 1) ok = true;
                else if (i != 0 && tmp.at(j) == vec[i-1]) ok = true;
            }
            if (!ok) break;
        }
        if (ok) {
            count++;
        }
    } while (next_permutation(vec.begin(), vec.end()));

    cout << count << endl;
}
