#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> d;
    rep(i,n) {
        int x, y; cin >> x >> y;
        d.emplace_back(x, y);
    }
    sort(d.begin(), d.end());
    int cnt = 1;
    int y_min = d[0].second;
    for (int i = 1; i < n; i++) {
        if (d[i].second < y_min) {
            cnt++;
            y_min = d[i].second;
        }
    }
    cout << cnt << endl;
}
