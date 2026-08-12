#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    map<int, vector<int>> AB;
    rep(i,n) {
        int a, b; cin >> a >> b;
        if (AB.count(a)) {
            AB[a].push_back(b);
        } else {
            AB[a] = {b};
        }
    }
    rep(i,m) {
        double total = 0;
        rep(j,AB[i+1].size()) {
            total += AB[i+1][j];
        }
        printf("%.20f", total / (double)AB[i+1].size());
        cout << endl;
    }
}
