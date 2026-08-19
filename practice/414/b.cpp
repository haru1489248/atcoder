#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    string s = "";
    long long total = 0;
    rep(i,n) {
        char c; long long l;
        cin >> c >> l;
        total += l;
        if (total > 100) {
            cout << "Too Long" << endl;
            return 0;
        }
        s += string(l, c);
    }
    cout << s << endl;
}
