#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n);
    vector<int> ans(n);
    rep(i,n) cin >> s[i];
    rep(i,m) {
        int x = 0, y = 0;
        rep(j,n) {
            if (s[j][i] == '0') x++;
            else y++;
        }
        if (x == 0 || y == 0) {
            rep(k,n) ans[k]++;
        } else if (x < y) {
            rep(k,n) {
                if (s[k][i] == '0') ans[k]++;
            }
        } else if (x > y) {
            rep(k,n) {
                if (s[k][i] == '1') ans[k]++;
            }
        }
    }
    int max_it = *max_element(ans.begin(), ans.end());
    rep(i,ans.size()) {
        if (ans[i] == max_it) {
            cout << i+1;
            if (i == n - 1) {
                cout << endl;
            } else {
                cout << ' ';
            }
        }
    }
}
