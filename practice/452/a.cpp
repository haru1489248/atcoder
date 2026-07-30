#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, d; cin >> m >> d;
    map<int, int> c = {{1,7}, {3,3}, {5,5}, {7,7}, {9,9}};
    if (c.count(m) && c[m] == d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
