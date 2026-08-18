#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    map<int, int> ma;
    queue<int> q;
    rep(i,n) {
        int a;
        cin >> a;
        if (ma.count(a)) ma[a]++;
        else ma[a] = 1;
    }
    rep(i,m) {
        int b;
        cin >> b;
        q.push(b);
    }
    rep(i,m) {
        if (ma.count(q.front())) {
            if (ma[q.front()] != 0) ma[q.front()]--;
        }
        q.pop();
    }

    vector<int> ans;
    for (pair p : ma) {
        if (p.second == 0) continue;
        for (int i = 0; i < p.second; i++) {
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
