#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int q; cin >> q;
    bool playing = false;
    int volume = 0;
    rep(i,q) {
        int a; cin >> a;
        if (a == 1) {
            volume++;
        } else if (a == 2) {
            if (volume != 0) volume--;
        } else if (a == 3) {
            playing = playing ? false : true;
        }

        if (volume >= 3 && playing) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
