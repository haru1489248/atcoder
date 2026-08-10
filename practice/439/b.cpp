#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    s.insert(n);
    while (n != 1) {
        int total = 0;
        while (n != 0) {
            int num = n % 10;
            total += num*num;
            n /= 10;
        }
        n = total;
        if (s.count(n)) {
            break;
        } else {
            s.insert(n);
        }
    }
    if (n == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
