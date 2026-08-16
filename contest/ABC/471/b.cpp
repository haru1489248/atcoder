#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    map<string, int> m;
    rep(i,n) cin >> s[i];
    rep(i,n) {
        transform(
            s[i].begin(),
            s[i].end(),
            s[i].begin(),
            [](char c) { return tolower(c); }
        );
        if (m.count(s[i])) m[s[i]]++;
        else m[s[i]] = 1;
    }
    int maximum = 0;
    for (pair p : m) {
        maximum = max(maximum, p.second);
    }
    cout << maximum << endl;
    return 0;
}
