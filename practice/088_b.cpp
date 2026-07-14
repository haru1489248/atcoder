#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }
    int result = -1000000;
    sort(a.rbegin(), a.rend());
    int alice_count = 0;
    int bob_count = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            alice_count += a.at(i);
        } else {
            bob_count += a.at(i);
        }
    }

    cout << alice_count - bob_count << endl;
}
