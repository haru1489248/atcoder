#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l[i];
    int a = 0, b = n-1;
    int index_a = -1;
    int index_b = -1;
    while (true) {
        if (l[a]) {
            index_a = a+1;
        } else {
            a++;
        }
        if (l[b]) {
            index_b = b+1;
        } else {
            b--;
        }
        if (a == b || a > b) {
            cout << 0 << endl;
            return 0;
        } else if (index_a != -1 && index_b != -1) {
            break;
        }
    }
    cout << index_b - index_a << endl;
}
