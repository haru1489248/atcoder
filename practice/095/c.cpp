#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    long long small = X > Y ? Y : X;
    long long total = 0;
    if ((A + B) < C * 2) {
        total += A * small + B * small;
    } else {
        total += C * small * 2;
    }
    long long smaller;
    if (X - small != 0) {
        smaller = A < C * 2 ? A : C * 2;
        total += smaller * (X - small);
    } else if (Y - small != 0) {
        smaller = B < C * 2 ? B : C * 2;
        total += smaller * (Y - small);
    }

    cout << total << endl;
}
