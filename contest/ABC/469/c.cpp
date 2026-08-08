#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> ans;
    rep(i,n) {
        if (s[i] == 'x') ans.push_back(i+1);
    }
    while (ans.size() < n) ans.push_back(n);

    rep(i,n) cout << ans[i] << '\n';
    return 0;
}
