#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    rep(i,n) cin >> a[i];
    int ans = 0;
    rep(l,n)rep(r,n) {
        if (r < l) continue;
        int total = 0;
        for (vector<int>::iterator it = a.begin() + l; it != a.begin() + r + 1; it++) {
            total += *it;
        }
        bool ok = true;
        for (vector<int>::iterator it = a.begin() + l; it != a.begin() + r + 1; it++) {
            if (total % *it == 0) {
                ok = false;
                break;
            }
        }
        if (ok) ans++;
    }

    cout << ans << endl;
}
