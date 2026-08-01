#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int t, x; cin >> t >> x;
    vector<int> a(t+1);
    rep(i,t+1) cin >> a[i];
    map<int, int> ans = {{0,a.at(0)}};

    int prev = 0;
    rep(i,t) {
        if (abs(a[i+1] - ans[prev]) >= x) {
            ans[i+1] = a[i+1];
            prev = i+1;
        }
    }

    for (auto p : ans) {
        cout << p.first << " " << p.second << endl;
    }
}
