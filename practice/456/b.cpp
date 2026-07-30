#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    vector<int> D_1(6); rep(i, 6) cin >> D_1.at(i);
    vector<int> D_2(6); rep(i, 6) cin >> D_2.at(i);
    vector<int> D_3(6); rep(i, 6) cin >> D_3.at(i);

    int cnt = 0;
    rep(i, 6) {
        rep(j, 6) {
            rep(k, 6) {
                if (D_1.at(i) == 4 || D_1.at(i) == 5 || D_1.at(i) == 6) {
                    if ((D_2.at(j) == 4 || D_2.at(j) == 5 || D_2.at(j) == 6) && D_2.at(j) != D_1.at(i)) {
                        if ((D_3.at(k) == 4 || D_3.at(k) == 5 || D_3.at(k) == 6) && D_3.at(k) != D_2.at(j) && D_3.at(k) != D_1.at(i)) {
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    double ans = cnt / 216.0;

    printf("%.10f", ans);
}
