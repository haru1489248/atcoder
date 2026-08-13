#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> vec(n);
    vector<int> ans;
    rep(i,k) {
        int a, b; cin >> a >> b;
        vec[a-1]++;
        if (vec[a-1] == m) ans.push_back(a);
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
