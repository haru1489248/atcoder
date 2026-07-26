#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n; cin >> n;
    int a = 0, b = 0;
    vector<int> v(n);
    vector<int> P(n);
    vector<int> Q(n);

    rep(i, 0, n) v.at(i) = i+1;
    rep(i, 0, n) cin >> P.at(i);
    rep(i, 0, n) cin >> Q.at(i);

    int count_p = 0;
    int count_q = 0;
    int count = 0;
    do {
        count++;
        for (int i = 0; i < n; i++) {
            if (v.at(i) == P.at(i)) {
                count_p++;
                if (count_p == n) {
                    a = count;
                }
            }
            if (v.at(i) == Q.at(i)) {
                count_q++;
                if (count_q == n) {
                    b = count;
                }
            }
        }
        count_p = 0;
        count_q = 0;
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(a-b) << endl;
}
