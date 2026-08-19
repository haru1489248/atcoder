#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    set<string> ans;
    rep(i,n) cin >> s[i];
    rep(i,n)rep(j,n) {
        if (i == j) continue;
        string result = s[i]+s[j];
        if (!ans.count(result)) ans.insert(result);
    }
    cout << ans.size() << endl;
}
