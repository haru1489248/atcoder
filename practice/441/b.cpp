#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    int q; cin >> q;

    rep(i, q) {
        bool takahashi = true;
        bool aoki = true;
        string w; cin >> w;
        rep(j, w.size()) {
            if (string::npos == s.find(w[j])) takahashi = false;
            if (string::npos == t.find(w[j])) aoki = false;
        }
        if (takahashi && aoki) {
            cout << "Unknown" << endl;
        } else if (takahashi) {
            cout << "Takahashi" << endl;
        } else if (aoki) {
            cout << "Aoki" << endl;
        } else {
            cout << "Unknown" << endl;
        }
    }
}
