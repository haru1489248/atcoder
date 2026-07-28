#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y; cin >> X >> Y;
    if (25*X == 16*(X+Y) && 25*Y == 9*(X+Y)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
