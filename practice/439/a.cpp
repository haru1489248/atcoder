#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long ans = (1 << n) - (2*n);
    cout << ans << endl;
}
