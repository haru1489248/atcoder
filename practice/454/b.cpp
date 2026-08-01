#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> F(N);
    set<int> f;
    rep(i,N) cin >> F[i];
    rep(i, N) {
        f.insert(F.at(i));
    }
    if (f.size() == F.size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    bool ok = true;
    rep(i, M) {
        if (!f.count(i+1)) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
