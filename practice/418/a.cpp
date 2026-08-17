#include <bits/stdc++.h>
using namespace std;

int main() {
    string c = "tea";
    int n; string s;
    cin >> n >> s;
    if (n < 3) {
        cout << "No" << endl;
        return 0;
    }
    string ans = s.substr(n-3, 3);
    if (ans == c) cout << "Yes" << endl;
    else cout << "No" << endl;
}
