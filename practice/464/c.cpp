#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    vector<vector<pair<int,int>>> events(m);
    rep(i,n) {
        int a, d, b;
        cin >> a >> d >> b;
        d--; a--; b--;
        events[0].emplace_back(a,1);
        events[d].emplace_back(a,-1);
        events[d].emplace_back(b,1);
    }

    vector<int> cnt(n);
    int ans = 0;
    rep(i,m) {
        for (auto [c,e] : events[i]) {
            if (cnt[c] == 0) ans++;
            cnt[c] += e;
            if (cnt[c] == 0) ans--;
        }
        cout << ans << endl;
    }

    return 0;
}
