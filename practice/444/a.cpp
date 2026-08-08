#include <bits/stdc++.h>
using namespace std;

int main() {
    string N; cin >> N;
    bool ok = false;
    for (int i = 1; i < N.size(); i++) {
        if (N[i] == N[i-1]) {
            ok = true;
        } else {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
