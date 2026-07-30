#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    cin >> X;
    cout << A.at(X-1) << endl;
}
