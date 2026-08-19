#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int total = 0;
    rep(i,n) {
        int a; cin >> a;
        total += a;
        if (total > m) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
