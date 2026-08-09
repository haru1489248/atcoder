#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> C(n);
    for (int i = 0; i < n; i++) {
        cin >> C.at(i);
    }

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.count(C.at(i))) {
            m[C.at(i)]++;
        } else {
            m[C.at(i)] = 1;
        }
    }
    int maximum = 0;
    for (pair p : m) {
        maximum = max(maximum, p.second);
    }
    cout << n - maximum << endl;
}
