#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N, 0);

    int alpha, beta;
    for (int i = 0; i < M; i++) {
        cin >> alpha >> beta;
        a.at(alpha - 1)++;
        a.at(beta - 1)++;
    }

    for (int i = 0; i < N; i++) {
        cout << a.at(i) << endl;
    }
}
