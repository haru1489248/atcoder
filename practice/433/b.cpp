#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> ans(n);
    rep(i,n) {
        int maximum = -1;
        rep(j, i) {
            if (a[j] > a[i]) {
                maximum = max(maximum, j+1);
            }
        }
        ans[i] = maximum;
    }

    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
}
