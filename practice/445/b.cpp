#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i,N) cin >> S[i];
    int m = 0;
    rep(i,N) {
        m = max(m, (int)S[i].size());
    }
    rep(i,N) {
        int s = S[i].size();
        int c = (m - s) / 2;
        cout << string(c, '.') << S[i] << string(c, '.') << endl;
    }
}
