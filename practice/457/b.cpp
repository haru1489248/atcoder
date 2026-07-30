#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y; cin >> N;
    vector<vector<int>> A(N);

    for (int i = 0; i < N; i++) {
        int L_i;
        cin >> L_i;
        for (int j = 0; j < L_i; j++) {
            int A_i;
            cin >> A_i;
            A.at(i).push_back(A_i);
        }
    }
    cin >> X >> Y;

    cout << A.at(X-1).at(Y-1) << endl;
}
