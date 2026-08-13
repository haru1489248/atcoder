#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        if (m.count(s[i])) m[s[i]]++;
        else m[s[i]] = 1;
    }
    for (pair p : m) {
        if (p.second == 1) {
            cout << p.first << endl;
        }
    }
}
