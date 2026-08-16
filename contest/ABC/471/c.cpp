#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> l, r;
    rep(i,n) {
        int a;
        cin >> a;
        if (a < 0) l.push_back(a);
        else r.push_back(a);
    }
    sort(l.rbegin(), l.rend());
    sort(r.begin(), r.end());

    queue<ll> ql, qr;
    for (int x : l) ql.push(x);
    for (int x : r) qr.push(x);
    const ll INF = 1e18;
    ql.push(-INF);
    qr.push(INF);

    ll x = 0, ans = 0;
    rep(k,n) {
        if (x-ql.front() <= qr.front()-x) {
            ans += x-ql.front();
            x = ql.front();
            ql.pop();
        } else {
            ans += qr.front()-x;
            x = qr.front();
            qr.pop();
        }
    }

    cout << ans << endl;
    return 0;
}
