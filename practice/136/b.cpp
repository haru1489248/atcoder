#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)

int main() {
    int N;
    cin >> N;

    int ans = 0;
    rep(i, 1, N + 1) {
        if (1 <= i and i <= 9) ans++;
        else if (100 <= i and i <= 999) ans++;
        else if (10000 <= i and i <= 99999) ans++;
    }
    cout << ans << endl;
}
