#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i) >> S.at(i);
    }

    int X = 10000;
    int Y = 10000;
    for (int i = 0; i < N; i++) {
        if (S.at(i) == "keep") {
            X -= B.at(i);
        } else {
            X -= A.at(i);
        }
        Y -= A.at(i);
    }

    cout << Y - X << endl;
}
