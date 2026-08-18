#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r; string s;
    cin >> n >> l >> r >> s;
    string ans = s.substr(l-1, r-l+1);
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] != 'o') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
