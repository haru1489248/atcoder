#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;
    bool can = true;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != '#' && can) {
            t[i] = 'o';
            can = false;
        } else if (t[i] == '#') {
            can = true;
        }
    }
    cout << t << endl;
}
