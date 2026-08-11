#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int h, w, n; cin >> h >> w >> n;
    vector a(h, vector<int> (w));
    rep(i,h)rep(j,w) {
        cin >> a[i][j];
    }
    set<int> b;
    rep(i,n) {
        int B;
        cin >> B;
        b.insert(B);
    };
    int maximum = 0;
    rep(i,h) {
        int cnt = 0;
        rep(j,w) {
            if (b.count(a[i][j])) cnt++;
        }
        maximum = max(maximum, cnt);
    }

    cout << maximum << endl;
}
