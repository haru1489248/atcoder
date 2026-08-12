#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    auto f = [&](int i, int j) {
        cout << "? " << i+1 << ' ' << j+1 << endl;
        string s;
        cin >> s;
        return s == "Yes";
    };

    int ans = 0;
    int r = 1;
    rep(l,n) {
        r = max(r, l + 1);
        while (r < n && f(l,r)) r++;
        ans += r-l-1;
    }
    cout << "! " << ans << endl;
    return 0;
}
