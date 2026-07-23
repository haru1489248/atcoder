#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    vector<int> results;
    int s = 0;
    int b = 0;
    if (A < B) {
        s = A;
        b = B;
    } else {
        s = B;
        b = A;
    }

    for (int i = 1; i <= s; i++) {
        if (s % i == 0) {
            if (b % i == 0) {
                results.push_back(i);
            }
        }
    }
    sort(results.rbegin(), results.rend());

    cout << results[K - 1] << endl;
}
