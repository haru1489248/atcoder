#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    if ((N / 2) + (N % 2) >= M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
