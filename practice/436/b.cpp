#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int mod(int c, int n) {
    int result;
    if (c < 0) {
        result = n + c;
    } else {
        result = c % n;
    }
    return result;
}

int main() {
    int n; cin >> n;
    vector ans(n, vector<int> (n));
    ans[0][(n-1)/2] = 1;
    int r = 0, c = (n-1) / 2, k = 1;
    rep(i, n*n-1) {
        if (ans[mod(r-1,n)][mod(c+1,n)] == 0) {
            ans[mod(r-1,n)][mod(c+1,n)] = k+1;
            r = mod(r-1,n);
            c = mod(c+1,n);
            k = k+1;
        }
        else {
            ans[mod(r+1,n)][c] = k+1;
            r = mod(r+1,n);
            k = k+1;
        }

    }
    rep(i,n){
        rep(j,n) {
            cout << ans[i][j];
            if (j == n-1) {
                cout << endl;
            } else {
                cout << ' ';
            }
        }
    }
}
