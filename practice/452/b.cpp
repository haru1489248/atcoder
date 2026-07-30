#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    rep(i,h) {
        rep(j,w) {
            if (i == 0 || j == 0 || i == h-1 || j == w-1) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
