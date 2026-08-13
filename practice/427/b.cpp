#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

map<int, int> m;
int digit_sum(int x) {
    int total = 0;
    while (true) {
        total += x % 10;
        x /= 10;
        if (x == 0) break;
    }
    return total;
}

int A(int i) {
    if (i == 0) {
        return 1;
    }
    int result = 0;
    if (m.count(i)) {
        return m[i];
    } else {
        rep(j,i) result += digit_sum(A(j));
        m[i] = result;
    }
    return result;
}

int main() {
    int n; cin >> n;
    int num = A(n);
    cout << num << endl;
}
