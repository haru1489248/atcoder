#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.insert(ai);
    }
    cin >> x;
    if (a.count(x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
