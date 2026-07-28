#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    map<int, vector<int>> result;

    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int A;
            cin >> A;
            if (result.count(A)) {
                result[A].push_back(i+1);
            } else {
                result[A] = {i+1};
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (result.count(i)) {
            cout << result[i].size() << " ";
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i].at(j);
                if (j + 1 == result[i].size()) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
        } else {
            cout << 0 << endl;
        }
    }
}
