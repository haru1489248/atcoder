#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    pair<int, int> p(0, 0);
    bool can = false;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        t -= count;
        while (t != 0) {
            if (p.first < x) {
                p.first += 1;
            } else if (p.second < y) {
                p.second += 1;
            } else if (p.first > x) {
                p.first -= 1;
            } else if (p.second > y) {
                p.second -= 1;
            } else {
                p.first -= 1;
            }
            count++;
            t--;
        }
        if (p.first == x && p.second == y) {
            can = true;
        } else {
            can = false;
            break;
        }
    }
    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
