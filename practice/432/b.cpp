#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    string s; cin >> s;
    vector<int> vec(s.size());
    rep(i,s.size()) {
        vec[i] = s[i] - '0';
    }
    int minimum = 1000000;
    sort(vec.begin(), vec.end());
    do {
        int total = 0;
        rep(i,vec.size()) {
            total = total*10 + vec[i];
        }
        if (to_string(total).size() == vec.size()) {
            minimum = min(minimum, total);
        }
    } while (next_permutation(vec.begin(), vec.end()));

    cout << minimum << endl;
}
