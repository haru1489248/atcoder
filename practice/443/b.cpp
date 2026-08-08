#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int after_year = 0;
    while (true) {
        k -= n;
        if (k <= 0) {
            break;
        }
        after_year++;
        n++;
    }

    cout << after_year << endl;
}
