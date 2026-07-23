#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int result;
    result = W / (H * 0.01) / (H * 0.01);
    if (result >= 25) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

