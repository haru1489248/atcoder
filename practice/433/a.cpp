#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z; cin >> x >> y >> z;
    if ((x - y * z) % (z - 1) == 0 && x - y * z >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
