#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int ans = 0;
    rep(h1,h)rep(w1,w) {
        for (int h2 = h1; h2 < h; h2++) {
            for (int w2 = w1; w2 < w; w2++) {
                bool ok = true;
                for (int i = h1; i <= h2; i++) {
                    for (int j = w1; j <= w2; j++) {
                        if (s[i][j] != s[h1+h2-i][w1+w2-j]) ok = false;
                    }
                }
                if (ok) ans++;
            }
        }
    }
    cout << ans << endl;
}
