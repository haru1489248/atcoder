#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    if (H == 1 && W == 1) {
        cout << 0 << endl;
        return 0;
    } else if (H == 1) {
        cout << 1 << " ";
        for (int i = 1; i <= W-1; i++) {
            if (i==W-1) {
                cout << 1 << endl;
                return 0;
            }
            cout << 2 << " ";
        }
    } else if (W == 1) {
        cout << 1 << endl;
        for (int i = 1; i <= H-1; i++) {
            if (i==H-1) {
                cout << 1 << endl;
                return 0;
            }
            cout << 2 << endl;
        }
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if ((i == 1 && j == W) || (i == H && j == 1) || (i == 1 && j == 1) || (i == H && j == W)) {
                cout << 2;
            } else if (i == 1 || i == H || j == 1 || j == W) {
                cout << 3;
            } else {
                cout << 4;
            }
            if (j == W) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
}
