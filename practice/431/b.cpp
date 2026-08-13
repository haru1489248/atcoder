#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int x, n; cin >> x >> n;
    vector<int> w(n);
    rep(i,n) cin >> w[i];
    int q; cin >> q;
    vector<bool> b(n, false);
    rep(i, q) {
        int p; cin >> p;
        if (b[p-1]) {
            x -= w[p-1];
        } else {
            x += w[p-1];
        }
        b[p-1].flip(); // bool値を反転する
        cout << x << endl;
    }
}
