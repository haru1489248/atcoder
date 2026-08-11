#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, f; cin >> d >> f;
    int ans = 7 - (d - f) % 7;
    cout << ans << endl;
}
