#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    set<int> s;
    rep(i, M) {
        s.insert(i+1);
    }
    rep(i, N) {
        int cnt = 0;
        bool ok = false;
        int L; cin >> L;
        rep(j, L) {
            int X; cin >> X;
            if (s.count(X) && !ok) {
                cout << X << endl;
                s.erase(X);
                ok = true;
            } else {
                cnt++;
            }
        }
        if (cnt == L) {
            cout << 0 << endl;
        }
    }
}
