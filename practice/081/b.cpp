#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int result = 0;
    while (true) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 == 0) {
                count++;
            }
        }

        if (count == A.size()) {
            for (int i = 0; i < N; i++) {
                A.at(i) /= 2;
            }
        } else {
            break;
        }
        result++;
    }

    cout << result << endl;
}
