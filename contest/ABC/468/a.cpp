#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    rep(i, 0, n) cin >> a.at(i);
    int count = 0;
    rep(i, 0, n) {
        if (i <= n-2 && i+2 < a.size() && a.at(i) < a.at(i+1) && a.at(i+1) > a.at(i+2)) {
            count++;
            i++;
        }
    }
    cout << count << endl;
    return 0;
}
