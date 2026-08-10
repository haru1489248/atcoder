#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> ti;
    rep(i,n) {
        int t;
        cin >> t;
        ti.push_back({t, i+1});
    };
    sort(ti.begin(), ti.end());
    cout << ti[0].second << ' ' << ti[1].second << ' ' << ti[2].second << endl;
}
