#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> vec(n-1);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            int c;
            cin >> c;
            vec[i].push_back(c);
        }
    }
    for (int a = 1; a <= n; a++) {
        for (int c = a+2; c <= n; c++) {
            for (int b = a+1; b < c; b++) {
                if (a < b && b < c) {
                    if (vec[a-1][c-a-1] > vec[a-1][b-a-1] + vec[b-1][c-b-1]) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                } else {
                    continue;
                }
            }
        }
    }
    cout << "No" << endl;
}
