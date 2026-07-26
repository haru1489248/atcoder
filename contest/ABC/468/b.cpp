#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int M, D; cin >> M >> D;
    string S; cin >> S;
    vector<int> indices;
    rep(i, 0, M) {
        if (S[i] == 'G') indices.push_back(i);
    }
    rep(i, 0, indices.size()) {
        int left = indices.at(i) - D < 0 ? 0 : indices.at(i) - D;
        int right = indices.at(i) + D > M ? M : indices.at(i) + D;
        int num = right - left + 1 + left;
        int a = num > M ? M - left : right - left + 1;
        S.replace(left < 0 ? 0 : left, a, string(a, 'G'));
    }
    int count = 0;
    rep(i, 0, M) {
        if (S[i] == '.') count++;
    }
    cout << count << endl;
    return 0;
}
