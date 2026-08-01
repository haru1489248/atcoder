#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector vec(M, vector<int> (2));
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        vec[A-1][0] += 1;
        vec[B-1][1] += 1;
    }

    for (int i = 0; i < M; i++) {
        cout << vec[i][1] - vec[i][0] << endl;
    }
}
