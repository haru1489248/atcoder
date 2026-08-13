#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ignore = s.size() / 2;
    for (int i = 0; i < s.size(); i++) {
        if (i == ignore) continue;
        cout << s[i];
        if (i == s.size() - 1) {
            cout << endl;
        }
    }
}
