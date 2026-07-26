#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    vector<int> vec(N);
    rep(i, 0, N) cin >> P.at(i);
    rep(i, 0, N) cin >> Q.at(i);
    rep(i, 0, N) vec.at(i) = i+1;

    int count = 0;
    do {
        if (P < vec && vec < Q) {
            count++;
        }
    } while (next_permutation(vec.begin(), vec.end()));

    cout << count << endl;
}
