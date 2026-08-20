#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> d(n-1);
    vector<vector<int>> ans(n-1);
    rep(i,n-1) cin >> d[i];
    rep(i,n-1)rep(j,n) {
        if (i > j || i == j) continue;
        int index = i;
        int total = 0;
        while (true) {
            total += d[index];
            index++;
            if (index == j) break;
        }
        ans[i].push_back(total);
    }
    rep(i,n-1)rep(j,ans[i].size()) {
        cout << ans[i][j];
        if (j == ans[i].size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
