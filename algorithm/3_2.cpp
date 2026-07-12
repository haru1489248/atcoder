#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int v;
    cin >> N >> v;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    int count = 0;
    for (int i; i < N; i++) {
        if (a.at(i) == v) {
            count++;
        }
    }

    cout << count << endl;
}
