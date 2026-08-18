#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b; string s;
    cin >> n >> a >> b >> s;
    for (int i = 0; i < n; i++) {
        if (i <= a-1) continue;
        else if (i >= s.size() - b) continue;
        cout << s[i];
    }
}
