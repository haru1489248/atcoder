#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> C(M);
    rep(i, M) cin >> C.at(i);
    int total = 0;
    rep(i, N) {
        int A, B; cin >> A >> B;
        if (C.at(A - 1) > B){
            total += B;
            C.at(A - 1) -= B;
        } else {
            total += C.at(A - 1);
            C.at(A - 1) = 0;
        }
    }
    cout << total << endl;
}
