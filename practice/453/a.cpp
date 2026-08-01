#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N; string S; cin >> N >> S;
    reverse(S.begin(), S.end());
    rep(i, N) {
        if (S[N-i-1] == 'o') S.pop_back();
        else break;
    }
    reverse(S.begin(), S.end());
    cout << S << endl;
}
