#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    int ans = x + y;
    if (ans > 12) cout << ans - 12 << endl;
    else cout << ans << endl;
}
