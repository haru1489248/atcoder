#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> B.at(i);
    }

    bool can = false;
    for (int i = 0; i < N; i++) {
        if (i == (B.at(A.at(i) - 1) - 1)) {
            can = true;
        }
        else {
            can = false;
            break;
        }
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
