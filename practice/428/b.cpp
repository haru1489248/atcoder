#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<string, int> m;
    rep(i,n-k+1) {
        if (m.count(s.substr(i,k))) {
            m[s.substr(i,k)]++;
        } else {
            m[s.substr(i,k)] = 1;
        }
    }
    int x = 0;
    for (pair p : m) {
        x = max(x, p.second);
    }
    cout << x << endl;
    vector<string> ans;
    for (pair p : m) {
        if (p.second == x) {
            ans.push_back(p.first);
        }
    }
    rep(i,ans.size()) {
        cout << ans[i];
        if (i == ans.size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
