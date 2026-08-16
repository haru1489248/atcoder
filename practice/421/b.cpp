#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y; cin >> x >> y;
    vector<long long> a(10);
    int i = 2;
    a[0] = x;
    a[1] = y;
    auto f = [&](int a_1, int a_2) {
        string s = to_string(a_1 + a_2);
        reverse(s.begin(), s.end());
        long long result = stoll(s);
        return result;
    };
    while (true) {
        a[i] = f(a[i-1],a[i-2]);
        if (i == 9) break;
        i++;
    }
    cout << a[9] << endl;
}
