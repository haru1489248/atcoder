#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(n);
    int q; cin >> q;
    rep(i,q) {
        int a, b;
        cin >> a;
        if (a == 1) {
            cin >> b;
            A.at(b-1)++;
        } else {
            rep(j,n) {
                if (A[j] >= 1) A[j]--;
            }
        }
        int c = A[0];
        rep(j,n-1) {
            c ^= A[j+1];
        }
        cout << c << endl;
    }
}
