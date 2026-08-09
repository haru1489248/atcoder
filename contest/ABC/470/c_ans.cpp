#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    int ans = 0;
    set<int> is;

    rep(qi,q) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            x--;
            ans ^= a[x];
            a[x]++;
            ans ^= a[x];
            is.insert(x);
        }
        if (type == 2) {
            set<int> nis;
            for (int i : is) {
                ans ^= a[i];
                a[i]--;
                ans ^= a[i];
                if (a[i] > 0) nis.insert(i);
            }
            is = nis;
        }
        cout << ans << '\n';
    }

    return 0;
}
