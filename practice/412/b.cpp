#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    vector<int> id;
    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i])) id.push_back(i-1);
    }
    for (int i = 0; i < id.size(); i++) {
        if (t.find(s[id[i]]) == string::npos) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
