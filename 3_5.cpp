#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    int even_count = 0;
    while (true) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (a.at(i) % 2 == 0) {
            count++;
            }
        }
        if (count != N) {
            break;
        }

        for (int i = 0; i < N; i++) {
            a.at(i) /= 2;
        }
        even_count++;
    }

    cout << even_count << endl;
}
