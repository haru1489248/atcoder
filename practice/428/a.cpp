#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x; cin >> s >> a >> b >> x;
    int n = x / (a+b);
    int m = x % (a+b);
    int ans = 0;
    if (m != 0 && a+b < x) {
        ans = s*a*n+s*(a<m?a:m);
    } else if (m == 0) {
        ans = s*a*n;
    } else if (a > x) {
        ans = s*x;
    } else if (a+b > x) {
        ans = s*a;
    }
    cout << ans << endl;
}
