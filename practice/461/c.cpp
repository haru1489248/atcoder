#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int n, k, m; cin >> n >> k >> m;
    vector<vector<int>> vs(n);
    rep(i,n) {
        int c, v; cin >> c >> v;
        vs[c-1].push_back(v);
    }

    vector<int> top, other;
    rep(i,n) {
        if (vs[i].size() == 0) continue;
        sort(vs[i].begin(), vs[i].end());
        top.push_back(vs[i].back());
        vs[i].pop_back();

        other.insert(other.end(), vs[i].begin(), vs[i].end());
    }

    ll ans = 0;
    sort(top.begin(), top.end());
    rep(i,m) {
        ans += top.back(); top.pop_back();
    }
    other.insert(other.end(), top.begin(), top.end());
    sort(other.rbegin(), other.rend());
    rep(i,k-m) ans += other[i];

    cout << ans << endl;
    return 0;
}
