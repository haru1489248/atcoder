#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n), l(n);
    rep(i,n) {
        cin >> h[i] >> l[i];
    }
    vector<int> d(n);
    d[n-1] = h[n-1];
    for (int i = n-2; i >= 0; i--) {
        d[i] = max(d[i+1],h[i]);
    }

    int q;
    cin >> q;
    rep(qi,q) {
        int t;
        cin >> t;
        int li = upper_bound(l.begin(), l.end(), t) - l.begin();
        cout << d[li] << '\n';
    }
    return 0;
}
