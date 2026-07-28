#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, L, R, A, B;

    cin >> X >> Y >> L >> R >> A >> B;

    int total = 0;
    for (int i = A + 1; i <= B; i++) {
        if (i <= L) {
            total += Y;
        } else if (L < i && i <= R) {
            total += X;
        } else if (R < i) {
            total += Y;
        }
    }


    cout << total << endl;
}
