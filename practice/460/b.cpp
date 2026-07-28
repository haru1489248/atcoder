#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        long long X_1 = 0, Y_1 = 0, X_2 = 0, Y_2 = 0, R_1 = 0, R_2 = 0;
        cin >> X_1 >> Y_1 >> R_1 >> X_2 >> Y_2 >> R_2;
        long long dx = X_1 - X_2;
        long long dy = Y_1 - Y_2;
        long long d = dx*dx+dy*dy;
        if ((R_1 - R_2) * (R_1 - R_2) <= d && d <= (R_1 + R_2) * (R_1 + R_2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
