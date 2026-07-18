#include <bits/stdc++.h>
using namespace std;

int64_t lucas_num(int N, vector<int64_t> &memo) {
    if (N == 0) return 2;
    else if (N == 1) return 1;
    else if (memo.at(N) != -1) return memo.at(N);
    memo.at(N) = lucas_num(N - 1, memo) + lucas_num(N - 2, memo);
    return memo.at(N);
}

int main() {
    int N;
    cin >> N;
    vector<int64_t> memo(N + 1, -1);
    cout << lucas_num(N, memo) << endl;
}
