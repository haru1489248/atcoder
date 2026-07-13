#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;

    vector<int> a(N);
    vector<int> b = {1000000000, 1000000000};

    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    for (int i = 0; i < N; i++) {
        if (a.at(i) < b.at(0)) {
            b.at(1) = b.at(0);
            b.at(0) = a.at(i);
        } else if (a.at(i) < b.at(1)) {
            b.at(1) = a.at(i);
        }
    }

    cout << b.at(1) << endl;
}
