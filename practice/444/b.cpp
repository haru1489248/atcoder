#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i <= n; i++)
using namespace std;

int digit_sum(int n) {
    int total = 0;
    while (n != 0) {
        total += n % 10;
        n /= 10;
    }
    return total;
}

int main() {
    int N, K; cin >> N >> K;
    int cnt = 0;
    rep(i, N) {
        if (digit_sum(i) == K) cnt++;
    }
    cout << cnt << endl;
}
