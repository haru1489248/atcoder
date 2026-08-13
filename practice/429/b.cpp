#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) {
        int total = 0;
        rep(j,n) {
            if (i==j) continue;
            total += a[j];
        }
        if (total == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
