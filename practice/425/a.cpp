#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    auto f = [&](int i) {
        int sign = 1;
        if ((i)%2 == 1) sign = -1;
        return sign * i*i*i;
    };
    int ans = 0;
    rep(i,n) ans += f(i+1);
    cout << ans << endl;
}
